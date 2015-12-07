/****************************************************************************
**
** Copyright (C) 2009 Nokia Corporation and/or its subsidiary(-ies).
** Contact: Qt Software Information (qt-info@nokia.com)
**
** This file is part of the QtCore module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** Commercial Usage
** Licensees holding valid Qt Commercial licenses may use this file in
** accordance with the Qt Commercial License Agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and Nokia.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 2.1 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU Lesser General Public License version 2.1 requirements
** will be met: http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Nokia gives you certain
** additional rights. These rights are described in the Nokia Qt LGPL
** Exception version 1.0, included in the file LGPL_EXCEPTION.txt in this
** package.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 3.0 as published by the Free Software
** Foundation and appearing in the file LICENSE.GPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU General Public License version 3.0 requirements will be
** met: http://www.gnu.org/copyleft/gpl.html.
**
** If you are unsure which license is appropriate for your use, please
** contact the sales department at qt-sales@nokia.com.
** $QT_END_LICENSE$
**
****************************************************************************/

#ifndef QEVENTDISPATCHER_UNIX_P_H
#define QEVENTDISPATCHER_UNIX_P_H

//
//  W A R N I N G
//  -------------
//
// This file is not part of the Qt API.  It exists purely as an
// implementation detail.  This header file may change from version to
// version without notice, or even be removed.
//
// We mean it.
//

#include "QtCore/qabstracteventdispatcher.h"
#include "QtCore/qlist.h"
#include "private/qabstracteventdispatcher_p.h"
#include "private/qpodlist_p.h"

#include <sys/types.h>
#include <sys/time.h>
#if !defined(Q_OS_HPUX) || defined(__ia64)
#include <sys/select.h>
#endif
#include <unistd.h>

QT_BEGIN_NAMESPACE
#if !defined(_POSIX_MONOTONIC_CLOCK)
#  define _POSIX_MONOTONIC_CLOCK -1
#endif

// Internal operator functions for timevals
inline bool operator<(const timeval &t1, const timeval &t2)
{ return t1.tv_sec < t2.tv_sec || (t1.tv_sec == t2.tv_sec && t1.tv_usec < t2.tv_usec); }
inline bool operator==(const timeval &t1, const timeval &t2)
{ return t1.tv_sec == t2.tv_sec && t1.tv_usec == t2.tv_usec; }
inline timeval &operator+=(timeval &t1, const timeval &t2)
{
    t1.tv_sec += t2.tv_sec;
    if ((t1.tv_usec += t2.tv_usec) >= 1000000l) {
        ++t1.tv_sec;
        t1.tv_usec -= 1000000l;
    }
    return t1;
}
inline timeval operator+(const timeval &t1, const timeval &t2)
{
    timeval tmp;
    tmp.tv_sec = t1.tv_sec + t2.tv_sec;
    if ((tmp.tv_usec = t1.tv_usec + t2.tv_usec) >= 1000000l) {
        ++tmp.tv_sec;
        tmp.tv_usec -= 1000000l;
    }
    return tmp;
}
inline timeval operator-(const timeval &t1, const timeval &t2)
{
    timeval tmp;
    tmp.tv_sec = t1.tv_sec - t2.tv_sec;
    if ((tmp.tv_usec = t1.tv_usec - t2.tv_usec) < 0l) {
        --tmp.tv_sec;
        tmp.tv_usec += 1000000l;
    }
    return tmp;
}

// internal timer info
struct QTimerInfo {
    int id;           // - timer identifier
    timeval interval; // - timer interval
    timeval timeout;  // - when to sent event
    QObject *obj;     // - object to receive event
    bool inTimerEvent;
};

class QTimerInfoList : public QList<QTimerInfo*>
{
#if (_POSIX_MONOTONIC_CLOCK-0 <= 0) || defined(QT_BOOTSTRAPPED)
    bool useMonotonicTimers;

    timeval previousTime;
    clock_t previousTicks;
    int ticksPerSecond;
    int msPerTick;

    bool timeChanged(timeval *delta);
#endif

    // state variables used by activateTimers()
    QTimerInfo *firstTimerInfo, *currentTimerInfo;

public:
    QTimerInfoList();

    void getTime(timeval &t);

    timeval currentTime;
    timeval updateCurrentTime();

    // must call updateCurrentTime() first!
    void repairTimersIfNeeded();

    bool timerWait(timeval &);
    void timerInsert(QTimerInfo *);
    void timerRepair(const timeval &);

    void registerTimer(int timerId, int interval, QObject *object);
    bool unregisterTimer(int timerId);
    bool unregisterTimers(QObject *object);
    QList<QPair<int, int> > registeredTimers(QObject *object) const;

    int activateTimers();
};

struct Q_CORE_EXPORT QSockNot
{
    QSocketNotifier *obj;
    int fd;
    fd_set *queue;
};

class Q_CORE_EXPORT QSockNotType
{
public:
    QSockNotType();
    ~QSockNotType();

    typedef QPodList<QSockNot*, 32> List;

    List list;
    fd_set select_fds;
    fd_set enabled_fds;
    fd_set pending_fds;

};

class QEventDispatcherUNIXPrivate;

class Q_CORE_EXPORT QEventDispatcherUNIX : public QAbstractEventDispatcher
{
    Q_OBJECT
    Q_DECLARE_PRIVATE(QEventDispatcherUNIX)

public:
    explicit QEventDispatcherUNIX(QObject *parent = 0);
    ~QEventDispatcherUNIX();

    bool processEvents(QEventLoop::ProcessEventsFlags flags);
    bool hasPendingEvents();

    void registerSocketNotifier(QSocketNotifier *notifier);
    void unregisterSocketNotifier(QSocketNotifier *notifier);

    void registerTimer(int timerId, int interval, QObject *object);
    bool unregisterTimer(int timerId);
    bool unregisterTimers(QObject *object);
    QList<TimerInfo> registeredTimers(QObject *object) const;

    void wakeUp();
    void interrupt();
    void flush();

protected:
    QEventDispatcherUNIX(QEventDispatcherUNIXPrivate &dd, QObject *parent = 0);

    void setSocketNotifierPending(QSocketNotifier *notifier);

    int activateTimers();
    int activateSocketNotifiers();

    virtual int select(int nfds,
                       fd_set *readfds, fd_set *writefds, fd_set *exceptfds,
                       timeval *timeout);
};

class Q_CORE_EXPORT QEventDispatcherUNIXPrivate : public QAbstractEventDispatcherPrivate
{
    Q_DECLARE_PUBLIC(QEventDispatcherUNIX)

public:
    QEventDispatcherUNIXPrivate();
    ~QEventDispatcherUNIXPrivate();

    int doSelect(QEventLoop::ProcessEventsFlags flags, timeval *timeout);

    bool mainThread;
    int thread_pipe[2];

    // highest fd for all socket notifiers
    int sn_highest;
    // 3 socket notifier types - read, write and exception
    QSockNotType sn_vec[3];

    QTimerInfoList timerList;

    // pending socket notifiers list
    QSockNotType::List sn_pending_list;

    QAtomicInt wakeUps;
    bool interrupt;
};

QT_END_NAMESPACE

#endif // QEVENTDISPATCHER_UNIX_P_H
