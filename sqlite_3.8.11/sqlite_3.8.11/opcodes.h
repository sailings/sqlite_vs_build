/* Automatically generated.  Do not edit */
/* See the mkopcodeh.awk script for details */
#define OP_Savepoint       1
#define OP_AutoCommit      2
#define OP_Transaction     3
#define OP_SorterNext      4
#define OP_PrevIfOpen      5
#define OP_NextIfOpen      6
#define OP_Prev            7
#define OP_Next            8
#define OP_Checkpoint      9
#define OP_JournalMode    10
#define OP_Vacuum         11
#define OP_VFilter        12 /* synopsis: iplan=r[P3] zplan='P4'           */
#define OP_VUpdate        13 /* synopsis: data=r[P3@P2]                    */
#define OP_Goto           14
#define OP_Gosub          15
#define OP_Return         16
#define OP_InitCoroutine  17
#define OP_EndCoroutine   18
#define OP_Not            19 /* same as TK_NOT, synopsis: r[P2]= !r[P1]    */
#define OP_Yield          20
#define OP_HaltIfNull     21 /* synopsis: if r[P3]=null halt               */
#define OP_Halt           22
#define OP_Integer        23 /* synopsis: r[P2]=P1                         */
#define OP_Int64          24 /* synopsis: r[P2]=P4                         */
#define OP_String         25 /* synopsis: r[P2]='P4' (len=P1)              */
#define OP_Null           26 /* synopsis: r[P2..P3]=NULL                   */
#define OP_SoftNull       27 /* synopsis: r[P1]=NULL                       */
#define OP_Blob           28 /* synopsis: r[P2]=P4 (len=P1)                */
#define OP_Variable       29 /* synopsis: r[P2]=parameter(P1,P4)           */
#define OP_Move           30 /* synopsis: r[P2@P3]=r[P1@P3]                */
#define OP_Copy           31 /* synopsis: r[P2@P3+1]=r[P1@P3+1]            */
#define OP_SCopy          32 /* synopsis: r[P2]=r[P1]                      */
#define OP_ResultRow      33 /* synopsis: output=r[P1@P2]                  */
#define OP_CollSeq        34
#define OP_Function0      35 /* synopsis: r[P3]=func(r[P2@P5])             */
#define OP_Function       36 /* synopsis: r[P3]=func(r[P2@P5])             */
#define OP_AddImm         37 /* synopsis: r[P1]=r[P1]+P2                   */
#define OP_MustBeInt      38
#define OP_RealAffinity   39
#define OP_Cast           40 /* synopsis: affinity(r[P1])                  */
#define OP_Permutation    41
#define OP_Compare        42 /* synopsis: r[P1@P3] <-> r[P2@P3]            */
#define OP_Jump           43
#define OP_Once           44
#define OP_If             45
#define OP_IfNot          46
#define OP_Column         47 /* synopsis: r[P3]=PX                         */
#define OP_Affinity       48 /* synopsis: affinity(r[P1@P2])               */
#define OP_MakeRecord     49 /* synopsis: r[P3]=mkrec(r[P1@P2])            */
#define OP_Count          50 /* synopsis: r[P2]=count()                    */
#define OP_ReadCookie     51
#define OP_SetCookie      52
#define OP_ReopenIdx      53 /* synopsis: root=P2 iDb=P3                   */
#define OP_OpenRead       54 /* synopsis: root=P2 iDb=P3                   */
#define OP_OpenWrite      55 /* synopsis: root=P2 iDb=P3                   */
#define OP_OpenAutoindex  56 /* synopsis: nColumn=P2                       */
#define OP_OpenEphemeral  57 /* synopsis: nColumn=P2                       */
#define OP_SorterOpen     58
#define OP_SequenceTest   59 /* synopsis: if( cursor[P1].ctr++ ) pc = P2   */
#define OP_OpenPseudo     60 /* synopsis: P3 columns in r[P2]              */
#define OP_Close          61
#define OP_ColumnsUsed    62
#define OP_SeekLT         63 /* synopsis: key=r[P3@P4]                     */
#define OP_SeekLE         64 /* synopsis: key=r[P3@P4]                     */
#define OP_SeekGE         65 /* synopsis: key=r[P3@P4]                     */
#define OP_SeekGT         66 /* synopsis: key=r[P3@P4]                     */
#define OP_Seek           67 /* synopsis: intkey=r[P2]                     */
#define OP_NoConflict     68 /* synopsis: key=r[P3@P4]                     */
#define OP_NotFound       69 /* synopsis: key=r[P3@P4]                     */
#define OP_Found          70 /* synopsis: key=r[P3@P4]                     */
#define OP_Or             71 /* same as TK_OR, synopsis: r[P3]=(r[P1] || r[P2]) */
#define OP_And            72 /* same as TK_AND, synopsis: r[P3]=(r[P1] && r[P2]) */
#define OP_NotExists      73 /* synopsis: intkey=r[P3]                     */
#define OP_Sequence       74 /* synopsis: r[P2]=cursor[P1].ctr++           */
#define OP_NewRowid       75 /* synopsis: r[P2]=rowid                      */
#define OP_IsNull         76 /* same as TK_ISNULL, synopsis: if r[P1]==NULL goto P2 */
#define OP_NotNull        77 /* same as TK_NOTNULL, synopsis: if r[P1]!=NULL goto P2 */
#define OP_Ne             78 /* same as TK_NE, synopsis: if r[P1]!=r[P3] goto P2 */
#define OP_Eq             79 /* same as TK_EQ, synopsis: if r[P1]==r[P3] goto P2 */
#define OP_Gt             80 /* same as TK_GT, synopsis: if r[P1]>r[P3] goto P2 */
#define OP_Le             81 /* same as TK_LE, synopsis: if r[P1]<=r[P3] goto P2 */
#define OP_Lt             82 /* same as TK_LT, synopsis: if r[P1]<r[P3] goto P2 */
#define OP_Ge             83 /* same as TK_GE, synopsis: if r[P1]>=r[P3] goto P2 */
#define OP_Insert         84 /* synopsis: intkey=r[P3] data=r[P2]          */
#define OP_BitAnd         85 /* same as TK_BITAND, synopsis: r[P3]=r[P1]&r[P2] */
#define OP_BitOr          86 /* same as TK_BITOR, synopsis: r[P3]=r[P1]|r[P2] */
#define OP_ShiftLeft      87 /* same as TK_LSHIFT, synopsis: r[P3]=r[P2]<<r[P1] */
#define OP_ShiftRight     88 /* same as TK_RSHIFT, synopsis: r[P3]=r[P2]>>r[P1] */
#define OP_Add            89 /* same as TK_PLUS, synopsis: r[P3]=r[P1]+r[P2] */
#define OP_Subtract       90 /* same as TK_MINUS, synopsis: r[P3]=r[P2]-r[P1] */
#define OP_Multiply       91 /* same as TK_STAR, synopsis: r[P3]=r[P1]*r[P2] */
#define OP_Divide         92 /* same as TK_SLASH, synopsis: r[P3]=r[P2]/r[P1] */
#define OP_Remainder      93 /* same as TK_REM, synopsis: r[P3]=r[P2]%r[P1] */
#define OP_Concat         94 /* same as TK_CONCAT, synopsis: r[P3]=r[P2]+r[P1] */
#define OP_InsertInt      95 /* synopsis: intkey=P3 data=r[P2]             */
#define OP_BitNot         96 /* same as TK_BITNOT, synopsis: r[P1]= ~r[P1] */
#define OP_String8        97 /* same as TK_STRING, synopsis: r[P2]='P4'    */
#define OP_Delete         98
#define OP_ResetCount     99
#define OP_SorterCompare 100 /* synopsis: if key(P1)!=trim(r[P3],P4) goto P2 */
#define OP_SorterData    101 /* synopsis: r[P2]=data                       */
#define OP_RowKey        102 /* synopsis: r[P2]=key                        */
#define OP_RowData       103 /* synopsis: r[P2]=data                       */
#define OP_Rowid         104 /* synopsis: r[P2]=rowid                      */
#define OP_NullRow       105
#define OP_Last          106
#define OP_SorterSort    107
#define OP_Sort          108
#define OP_Rewind        109
#define OP_SorterInsert  110
#define OP_IdxInsert     111 /* synopsis: key=r[P2]                        */
#define OP_IdxDelete     112 /* synopsis: key=r[P2@P3]                     */
#define OP_IdxRowid      113 /* synopsis: r[P2]=rowid                      */
#define OP_IdxLE         114 /* synopsis: key=r[P3@P4]                     */
#define OP_IdxGT         115 /* synopsis: key=r[P3@P4]                     */
#define OP_IdxLT         116 /* synopsis: key=r[P3@P4]                     */
#define OP_IdxGE         117 /* synopsis: key=r[P3@P4]                     */
#define OP_Destroy       118
#define OP_Clear         119
#define OP_ResetSorter   120
#define OP_CreateIndex   121 /* synopsis: r[P2]=root iDb=P1                */
#define OP_CreateTable   122 /* synopsis: r[P2]=root iDb=P1                */
#define OP_ParseSchema   123
#define OP_LoadAnalysis  124
#define OP_DropTable     125
#define OP_DropIndex     126
#define OP_DropTrigger   127
#define OP_IntegrityCk   128
#define OP_RowSetAdd     129 /* synopsis: rowset(P1)=r[P2]                 */
#define OP_RowSetRead    130 /* synopsis: r[P3]=rowset(P1)                 */
#define OP_RowSetTest    131 /* synopsis: if r[P3] in rowset(P1) goto P2   */
#define OP_Program       132
#define OP_Real          133 /* same as TK_FLOAT, synopsis: r[P2]=P4       */
#define OP_Param         134
#define OP_FkCounter     135 /* synopsis: fkctr[P1]+=P2                    */
#define OP_FkIfZero      136 /* synopsis: if fkctr[P1]==0 goto P2          */
#define OP_MemMax        137 /* synopsis: r[P1]=max(r[P1],r[P2])           */
#define OP_IfPos         138 /* synopsis: if r[P1]>0 goto P2               */
#define OP_IfNeg         139 /* synopsis: r[P1]+=P3, if r[P1]<0 goto P2    */
#define OP_IfNotZero     140 /* synopsis: if r[P1]!=0 then r[P1]+=P3, goto P2 */
#define OP_DecrJumpZero  141 /* synopsis: if (--r[P1])==0 goto P2          */
#define OP_JumpZeroIncr  142 /* synopsis: if (r[P1]++)==0 ) goto P2        */
#define OP_AggStep0      143 /* synopsis: accum=r[P3] step(r[P2@P5])       */
#define OP_AggStep       144 /* synopsis: accum=r[P3] step(r[P2@P5])       */
#define OP_AggFinal      145 /* synopsis: accum=r[P1] N=P2                 */
#define OP_IncrVacuum    146
#define OP_Expire        147
#define OP_TableLock     148 /* synopsis: iDb=P1 root=P2 write=P3          */
#define OP_VBegin        149
#define OP_VCreate       150
#define OP_VDestroy      151
#define OP_VOpen         152
#define OP_VColumn       153 /* synopsis: r[P3]=vcolumn(P2)                */
#define OP_VNext         154
#define OP_VRename       155
#define OP_Pagecount     156
#define OP_MaxPgcnt      157
#define OP_Init          158 /* synopsis: Start at P2                      */
#define OP_Noop          159
#define OP_Explain       160


/* Properties such as "out2" or "jump" that are specified in
** comments following the "case" for each opcode in the vdbe.c
** are encoded into bitvectors as follows:
*/
#define OPFLG_JUMP            0x0001  /* jump:  P2 holds jmp target */
#define OPFLG_IN1             0x0002  /* in1:   P1 is an input */
#define OPFLG_IN2             0x0004  /* in2:   P2 is an input */
#define OPFLG_IN3             0x0008  /* in3:   P3 is an input */
#define OPFLG_OUT2            0x0010  /* out2:  P2 is an output */
#define OPFLG_OUT3            0x0020  /* out3:  P3 is an output */
#define OPFLG_INITIALIZER {\
/*   0 */ 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01,\
/*   8 */ 0x01, 0x00, 0x10, 0x00, 0x01, 0x00, 0x01, 0x01,\
/*  16 */ 0x02, 0x01, 0x02, 0x12, 0x03, 0x08, 0x00, 0x10,\
/*  24 */ 0x10, 0x10, 0x10, 0x00, 0x10, 0x10, 0x00, 0x00,\
/*  32 */ 0x10, 0x00, 0x00, 0x00, 0x00, 0x02, 0x03, 0x02,\
/*  40 */ 0x02, 0x00, 0x00, 0x01, 0x01, 0x03, 0x03, 0x00,\
/*  48 */ 0x00, 0x00, 0x10, 0x10, 0x08, 0x00, 0x00, 0x00,\
/*  56 */ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x09,\
/*  64 */ 0x09, 0x09, 0x09, 0x04, 0x09, 0x09, 0x09, 0x26,\
/*  72 */ 0x26, 0x09, 0x10, 0x10, 0x03, 0x03, 0x0b, 0x0b,\
/*  80 */ 0x0b, 0x0b, 0x0b, 0x0b, 0x00, 0x26, 0x26, 0x26,\
/*  88 */ 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x00,\
/*  96 */ 0x12, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,\
/* 104 */ 0x10, 0x00, 0x01, 0x01, 0x01, 0x01, 0x04, 0x04,\
/* 112 */ 0x00, 0x10, 0x01, 0x01, 0x01, 0x01, 0x10, 0x00,\
/* 120 */ 0x00, 0x10, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00,\
/* 128 */ 0x00, 0x06, 0x23, 0x0b, 0x01, 0x10, 0x10, 0x00,\
/* 136 */ 0x01, 0x04, 0x03, 0x03, 0x03, 0x03, 0x03, 0x00,\
/* 144 */ 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,\
/* 152 */ 0x00, 0x00, 0x01, 0x00, 0x10, 0x10, 0x01, 0x00,\
/* 160 */ 0x00,}
