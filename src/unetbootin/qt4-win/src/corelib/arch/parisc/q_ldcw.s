	.SPACE $PRIVATE$
	.SUBSPA $DATA$,QUAD=1,ALIGN=8,ACCESS=31
	.SUBSPA $BSS$,QUAD=1,ALIGN=8,ACCESS=31,ZERO,SORT=82
	.SPACE $TEXT$
	.SUBSPA $LIT$,QUAD=0,ALIGN=8,ACCESS=44
	.SUBSPA $CODE$,QUAD=0,ALIGN=8,ACCESS=44,CODE_ONLY
	.IMPORT $global$,DATA
	.IMPORT $$dyncall,MILLICODE
	.SPACE $TEXT$
	.SUBSPA $CODE$

	.align 4
	.EXPORT q_ldcw,ENTRY,PRIV_LEV=3,ARGW0=GR,RTNVAL=GR
q_ldcw
	.PROC
	.CALLINFO FRAME=0,CALLS,SAVE_RP
	.ENTRY
	ldcw 0(%r26),%r1
	bv %r0(%r2)
	copy %r1,%r28
	.EXIT
	.PROCEND
