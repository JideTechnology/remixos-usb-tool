HEADERS       = dialog.h
SOURCES       = main.cpp \
                dialog.cpp

# install
target.path = $$[QT_INSTALL_EXAMPLES]/dialogs/sipdialog
sources.files = $$SOURCES $$HEADERS *.pro
sources.path = $$[QT_INSTALL_EXAMPLES]/dialogs/sipdialog
INSTALLS += target sources
wince50standard-x86-msvc2005: LIBS += libcmt.lib corelibc.lib ole32.lib oleaut32.lib uuid.lib commctrl.lib coredll.lib winsock.lib ws2.lib


