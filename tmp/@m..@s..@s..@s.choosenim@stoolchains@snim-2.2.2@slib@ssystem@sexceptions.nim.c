/* Generated by Nim Compiler v2.2.2 */
/* Compiled for: Linux, wasm32, clang */
/* Command for C compiler:
   emcc -c -w -ferror-limit=3 -pthread -flto -O3   -I/home/gregis/.choosenim/toolchains/nim-2.2.2/lib -I/home/gregis/Projects/OneLastBeat/src -o /home/gregis/Projects/OneLastBeat/tmp/@m..@s..@s..@s.choosenim@stoolchains@snim-2.2.2@slib@ssystem@sexceptions.nim.c.o /home/gregis/Projects/OneLastBeat/tmp/@m..@s..@s..@s.choosenim@stoolchains@snim-2.2.2@slib@ssystem@sexceptions.nim.c */
#define NIM_INTBITS 32

#include "nimbase.h"
#undef LANGUAGE_C
#undef MIPSEB
#undef MIPSEL
#undef PPC
#undef R3000
#undef R4000
#undef i386
#undef linux
#undef mips
#undef near
#undef far
#undef powerpc
#undef unix
typedef struct TNimTypeV2 TNimTypeV2;
typedef struct tyObject_IOError__YfyTxe9cThBYfr9aHkc9cltBw tyObject_IOError__YfyTxe9cThBYfr9aHkc9cltBw;
typedef struct tyObject_RefHeader__gnJExvuIhzi79cQetGScWGg tyObject_RefHeader__gnJExvuIhzi79cQetGScWGg;
typedef struct tyObject_CatchableError__170PUSd9bpOf09cSZOeaNOaA tyObject_CatchableError__170PUSd9bpOf09cSZOeaNOaA;
typedef struct Exception Exception;
typedef struct RootObj RootObj;
typedef struct NimStrPayload NimStrPayload;
typedef struct NimStringV2 NimStringV2;
typedef struct tySequence__PclZllI1Ry7MX4uStk4Jug tySequence__PclZllI1Ry7MX4uStk4Jug;
typedef struct tySequence__PclZllI1Ry7MX4uStk4Jug_Content tySequence__PclZllI1Ry7MX4uStk4Jug_Content;
typedef struct tyObject_GcEnv__ya2EvOe4TJjBgsQr2pyzfQ tyObject_GcEnv__ya2EvOe4TJjBgsQr2pyzfQ;
typedef struct tyObject_CellSeq__gJgGhndQf4jMmiPOrKMxRg tyObject_CellSeq__gJgGhndQf4jMmiPOrKMxRg;
typedef struct tyTuple__N4J9cV4JZGem3ljqqj5rT0Q tyTuple__N4J9cV4JZGem3ljqqj5rT0Q;
typedef struct tyObject_CellSeq__tZ9b9bi79clGwcRTCbEE09bqYw tyObject_CellSeq__tZ9b9bi79clGwcRTCbEE09bqYw;
typedef struct tyTuple__KKQKvM3dsxdtYGn9cLuLUWA tyTuple__KKQKvM3dsxdtYGn9cLuLUWA;
typedef struct tyObject_ValueError__tkID4So8lTV9byDQqIe8LtQ tyObject_ValueError__tkID4So8lTV9byDQqIe8LtQ;
typedef struct tyObject_KeyError__lnof7UhkKLTGVjjzWWC5Qg tyObject_KeyError__lnof7UhkKLTGVjjzWWC5Qg;
typedef struct tyObject_OSError__g5aWKLnwFOcW9cBfUnw9cYgA tyObject_OSError__g5aWKLnwFOcW9cBfUnw9cYgA;
typedef struct tyObject_IndexDefect__8x8uaszBx9boroLUKgH6obQ tyObject_IndexDefect__8x8uaszBx9boroLUKgH6obQ;
typedef struct tyObject_Defect__4Qjw1ymvv6qxb82XbdyQ5Q tyObject_Defect__4Qjw1ymvv6qxb82XbdyQ5Q;
typedef struct tyObject_ReraiseDefect__8429cG9aqewm0cJvfSU88icA tyObject_ReraiseDefect__8429cG9aqewm0cJvfSU88icA;
typedef struct tyObject_StackTraceEntry__DppJCFaZRvent8fPJeLs4Q tyObject_StackTraceEntry__DppJCFaZRvent8fPJeLs4Q;
struct TNimTypeV2 {
	void* destructor;
	NI size;
	NI16 align;
	NI16 depth;
	NU32* display;
	void* traceImpl;
	void* typeInfoV1;
	NI flags;
	void* vTable[SEQ_DECL_SIZE];
};
struct tyObject_RefHeader__gnJExvuIhzi79cQetGScWGg {
	NI rc;
	NI rootIdx;
};
struct RootObj {
	TNimTypeV2* m_type;
};
struct NimStrPayload {
	NI cap;
	NIM_CHAR data[SEQ_DECL_SIZE];
};
struct NimStringV2 {
	NI len;
	NimStrPayload* p;
};
struct tySequence__PclZllI1Ry7MX4uStk4Jug {
  NI len; tySequence__PclZllI1Ry7MX4uStk4Jug_Content* p;
};
struct Exception {
	RootObj Sup;
	Exception* parent;
	NCSTRING name;
	NimStringV2 message;
	tySequence__PclZllI1Ry7MX4uStk4Jug trace;
	Exception* up;
};
struct tyObject_CatchableError__170PUSd9bpOf09cSZOeaNOaA {
	Exception Sup;
};
struct tyObject_IOError__YfyTxe9cThBYfr9aHkc9cltBw {
	tyObject_CatchableError__170PUSd9bpOf09cSZOeaNOaA Sup;
};
struct tyObject_CellSeq__gJgGhndQf4jMmiPOrKMxRg {
	NI len;
	NI cap;
	tyTuple__N4J9cV4JZGem3ljqqj5rT0Q* d;
};
struct tyObject_CellSeq__tZ9b9bi79clGwcRTCbEE09bqYw {
	NI len;
	NI cap;
	tyTuple__KKQKvM3dsxdtYGn9cLuLUWA* d;
};
struct tyObject_GcEnv__ya2EvOe4TJjBgsQr2pyzfQ {
	tyObject_CellSeq__gJgGhndQf4jMmiPOrKMxRg traceStack;
	tyObject_CellSeq__tZ9b9bi79clGwcRTCbEE09bqYw toFree;
	NI freed;
	NI touched;
	NI edges;
	NI rcSum;
	NIM_BOOL keepThreshold;
};
struct tyTuple__N4J9cV4JZGem3ljqqj5rT0Q {
	void** Field0;
	TNimTypeV2* Field1;
};
struct tyObject_ValueError__tkID4So8lTV9byDQqIe8LtQ {
	tyObject_CatchableError__170PUSd9bpOf09cSZOeaNOaA Sup;
};
struct tyObject_KeyError__lnof7UhkKLTGVjjzWWC5Qg {
	tyObject_ValueError__tkID4So8lTV9byDQqIe8LtQ Sup;
};
struct tyObject_OSError__g5aWKLnwFOcW9cBfUnw9cYgA {
	tyObject_CatchableError__170PUSd9bpOf09cSZOeaNOaA Sup;
	NI32 errorCode;
};
struct tyObject_Defect__4Qjw1ymvv6qxb82XbdyQ5Q {
	Exception Sup;
};
struct tyObject_IndexDefect__8x8uaszBx9boroLUKgH6obQ {
	tyObject_Defect__4Qjw1ymvv6qxb82XbdyQ5Q Sup;
};
struct tyObject_ReraiseDefect__8429cG9aqewm0cJvfSU88icA {
	tyObject_Defect__4Qjw1ymvv6qxb82XbdyQ5Q Sup;
};
struct tyObject_StackTraceEntry__DppJCFaZRvent8fPJeLs4Q {
	NCSTRING procname;
	NI line;
	NCSTRING filename;
};
struct tySequence__PclZllI1Ry7MX4uStk4Jug_Content { NI cap; tyObject_StackTraceEntry__DppJCFaZRvent8fPJeLs4Q data[SEQ_DECL_SIZE]; };
N_LIB_PRIVATE N_NIMCALL(void, rttiDestroy__systemZexceptions_u56)(void* dest_p0);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___system_u8899)(tyObject_IOError__YfyTxe9cThBYfr9aHkc9cltBw* dest_p0);
static N_INLINE(NIM_BOOL, nimDecRefIsLastCyclicDyn)(void* p_p0);
static N_INLINE(NI, minuspercent___system_u813)(NI x_p0, NI y_p1);
N_LIB_PRIVATE N_NOINLINE(void, rememberCycle__system_u3528)(NIM_BOOL isDestroyAction_p0, tyObject_RefHeader__gnJExvuIhzi79cQetGScWGg* s_p1, TNimTypeV2* desc_p2);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
N_LIB_PRIVATE N_NIMCALL(void, nimDestroyAndDispose)(void* p_p0);
N_LIB_PRIVATE N_NOCONV(void, deallocShared)(void* p_p0);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___stdZassertions_u74)(tySequence__PclZllI1Ry7MX4uStk4Jug dest_p0);
N_LIB_PRIVATE N_NIMCALL(void, eqtrace___system_u8911)(tyObject_IOError__YfyTxe9cThBYfr9aHkc9cltBw* dest_p0, void* env_p1);
static N_INLINE(void, nimTraceRefDyn)(void* q_p0, void* env_p1);
static N_INLINE(void, add__system_u3011)(tyObject_CellSeq__gJgGhndQf4jMmiPOrKMxRg* s_p0, void** c_p1, TNimTypeV2* t_p2);
N_LIB_PRIVATE N_NIMCALL(void, resize__system_u3019)(tyObject_CellSeq__gJgGhndQf4jMmiPOrKMxRg* s_p0);
N_LIB_PRIVATE N_NIMCALL(void, rttiDestroy__systemZexceptions_u58)(void* dest_p0);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___system_u8058)(tyObject_ValueError__tkID4So8lTV9byDQqIe8LtQ* dest_p0);
N_LIB_PRIVATE N_NIMCALL(void, eqtrace___system_u8070)(tyObject_ValueError__tkID4So8lTV9byDQqIe8LtQ* dest_p0, void* env_p1);
N_LIB_PRIVATE N_NIMCALL(void, rttiDestroy__systemZexceptions_u60)(void* dest_p0);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___pureZjson_u3350)(tyObject_KeyError__lnof7UhkKLTGVjjzWWC5Qg* dest_p0);
N_LIB_PRIVATE N_NIMCALL(void, eqtrace___pureZjson_u3362)(tyObject_KeyError__lnof7UhkKLTGVjjzWWC5Qg* dest_p0, void* env_p1);
N_LIB_PRIVATE N_NIMCALL(void, rttiDestroy__systemZexceptions_u62)(void* dest_p0);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___stdZoserrors_u60)(tyObject_OSError__g5aWKLnwFOcW9cBfUnw9cYgA* dest_p0);
N_LIB_PRIVATE N_NIMCALL(void, eqtrace___stdZoserrors_u72)(tyObject_OSError__g5aWKLnwFOcW9cBfUnw9cYgA* dest_p0, void* env_p1);
N_LIB_PRIVATE N_NIMCALL(void, rttiDestroy__systemZexceptions_u64)(void* dest_p0);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___system_u4742)(tyObject_IndexDefect__8x8uaszBx9boroLUKgH6obQ* dest_p0);
N_LIB_PRIVATE N_NIMCALL(void, eqtrace___system_u4754)(tyObject_IndexDefect__8x8uaszBx9boroLUKgH6obQ* dest_p0, void* env_p1);
N_LIB_PRIVATE N_NIMCALL(void, rttiDestroy__systemZexceptions_u66)(void* dest_p0);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___system_u4516)(tyObject_ReraiseDefect__8429cG9aqewm0cJvfSU88icA* dest_p0);
N_LIB_PRIVATE N_NIMCALL(void, eqtrace___system_u4528)(tyObject_ReraiseDefect__8429cG9aqewm0cJvfSU88icA* dest_p0, void* env_p1);
N_LIB_PRIVATE TNimTypeV2 NTIv2__YfyTxe9cThBYfr9aHkc9cltBw_;
N_LIB_PRIVATE TNimTypeV2 NTIv2__tkID4So8lTV9byDQqIe8LtQ_;
N_LIB_PRIVATE TNimTypeV2 NTIv2__lnof7UhkKLTGVjjzWWC5Qg_;
N_LIB_PRIVATE TNimTypeV2 NTIv2__g5aWKLnwFOcW9cBfUnw9cYgA_;
N_LIB_PRIVATE TNimTypeV2 NTIv2__8x8uaszBx9boroLUKgH6obQ_;
N_LIB_PRIVATE TNimTypeV2 NTIv2__8429cG9aqewm0cJvfSU88icA_;
extern NIM_THREADVAR NIM_BOOL nimInErrorMode__system_u4433;
static NIM_CONST NU32 TM__TzI3paKQY09cLjc9cmCvur3A_2[4] = {3701606400, 1285336064, 3171897600, 4237542656};
N_LIB_PRIVATE TNimTypeV2 NTIv2__YfyTxe9cThBYfr9aHkc9cltBw_ = {.destructor = (void*)rttiDestroy__systemZexceptions_u56, .size = sizeof(tyObject_IOError__YfyTxe9cThBYfr9aHkc9cltBw), .align = (NI16) NIM_ALIGNOF(tyObject_IOError__YfyTxe9cThBYfr9aHkc9cltBw), .depth = 3, .display = TM__TzI3paKQY09cLjc9cmCvur3A_2, .traceImpl = (void*)eqtrace___system_u8911, .flags = 0};
static NIM_CONST NU32 TM__TzI3paKQY09cLjc9cmCvur3A_3[4] = {3701606400, 1285336064, 3171897600, 1107550464};
N_LIB_PRIVATE TNimTypeV2 NTIv2__tkID4So8lTV9byDQqIe8LtQ_ = {.destructor = (void*)rttiDestroy__systemZexceptions_u58, .size = sizeof(tyObject_ValueError__tkID4So8lTV9byDQqIe8LtQ), .align = (NI16) NIM_ALIGNOF(tyObject_ValueError__tkID4So8lTV9byDQqIe8LtQ), .depth = 3, .display = TM__TzI3paKQY09cLjc9cmCvur3A_3, .traceImpl = (void*)eqtrace___system_u8070, .flags = 0};
static NIM_CONST NU32 TM__TzI3paKQY09cLjc9cmCvur3A_4[5] = {3701606400, 1285336064, 3171897600, 1107550464, 2048912640};
N_LIB_PRIVATE TNimTypeV2 NTIv2__lnof7UhkKLTGVjjzWWC5Qg_ = {.destructor = (void*)rttiDestroy__systemZexceptions_u60, .size = sizeof(tyObject_KeyError__lnof7UhkKLTGVjjzWWC5Qg), .align = (NI16) NIM_ALIGNOF(tyObject_KeyError__lnof7UhkKLTGVjjzWWC5Qg), .depth = 4, .display = TM__TzI3paKQY09cLjc9cmCvur3A_4, .traceImpl = (void*)eqtrace___pureZjson_u3362, .flags = 0};
static NIM_CONST NU32 TM__TzI3paKQY09cLjc9cmCvur3A_5[4] = {3701606400, 1285336064, 3171897600, 2526423040};
N_LIB_PRIVATE TNimTypeV2 NTIv2__g5aWKLnwFOcW9cBfUnw9cYgA_ = {.destructor = (void*)rttiDestroy__systemZexceptions_u62, .size = sizeof(tyObject_OSError__g5aWKLnwFOcW9cBfUnw9cYgA), .align = (NI16) NIM_ALIGNOF(tyObject_OSError__g5aWKLnwFOcW9cBfUnw9cYgA), .depth = 3, .display = TM__TzI3paKQY09cLjc9cmCvur3A_5, .traceImpl = (void*)eqtrace___stdZoserrors_u72, .flags = 0};
static NIM_CONST NU32 TM__TzI3paKQY09cLjc9cmCvur3A_6[4] = {3701606400, 1285336064, 150001408, 523135488};
N_LIB_PRIVATE TNimTypeV2 NTIv2__8x8uaszBx9boroLUKgH6obQ_ = {.destructor = (void*)rttiDestroy__systemZexceptions_u64, .size = sizeof(tyObject_IndexDefect__8x8uaszBx9boroLUKgH6obQ), .align = (NI16) NIM_ALIGNOF(tyObject_IndexDefect__8x8uaszBx9boroLUKgH6obQ), .depth = 3, .display = TM__TzI3paKQY09cLjc9cmCvur3A_6, .traceImpl = (void*)eqtrace___system_u4754, .flags = 0};
static NIM_CONST NU32 TM__TzI3paKQY09cLjc9cmCvur3A_7[4] = {3701606400, 1285336064, 150001408, 2378111744};
N_LIB_PRIVATE TNimTypeV2 NTIv2__8429cG9aqewm0cJvfSU88icA_ = {.destructor = (void*)rttiDestroy__systemZexceptions_u66, .size = sizeof(tyObject_ReraiseDefect__8429cG9aqewm0cJvfSU88icA), .align = (NI16) NIM_ALIGNOF(tyObject_ReraiseDefect__8429cG9aqewm0cJvfSU88icA), .depth = 3, .display = TM__TzI3paKQY09cLjc9cmCvur3A_7, .traceImpl = (void*)eqtrace___system_u4528, .flags = 0};
static N_INLINE(NI, minuspercent___system_u813)(NI x_p0, NI y_p1) {
	NI result;
	result = ((NI) ((NU)((NU32)(((NU) (x_p0))) - (NU32)(((NU) (y_p1))))));
	return result;
}
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void) {
	NIM_BOOL* result;
	result = (&nimInErrorMode__system_u4433);
	return result;
}
static N_INLINE(NIM_BOOL, nimDecRefIsLastCyclicDyn)(void* p_p0) {
	NIM_BOOL result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = NIM_FALSE;
	{
		tyObject_RefHeader__gnJExvuIhzi79cQetGScWGg* cell;
		NI T5_;
		if (!!((p_p0 == NIM_NIL))) goto LA3_;
		T5_ = (NI)0;
		T5_ = minuspercent___system_u813(((NI) (ptrdiff_t) (p_p0)), ((NI)8));
		cell = ((tyObject_RefHeader__gnJExvuIhzi79cQetGScWGg*) (T5_));
		{
			if (!((NI)((*cell).rc & ((NI)-16)) == ((NI)0))) goto LA8_;
			result = NIM_TRUE;
		}
		goto LA6_;
LA8_: ;
		{
			(*cell).rc -= ((NI)16);
		}
LA6_: ;
		rememberCycle__system_u3528(result, cell, (*((TNimTypeV2**) (p_p0))));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
LA3_: ;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___system_u8899)(tyObject_IOError__YfyTxe9cThBYfr9aHkc9cltBw* dest_p0) {
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = nimDecRefIsLastCyclicDyn((*dest_p0).Sup.Sup.parent);
		if (!T3_) goto LA4_;
		nimDestroyAndDispose((*dest_p0).Sup.Sup.parent);
	}
LA4_: ;
	if ((*dest_p0).Sup.Sup.message.p && !((*dest_p0).Sup.Sup.message.p->cap & NIM_STRLIT_FLAG)) {
 deallocShared((*dest_p0).Sup.Sup.message.p);
}
	eqdestroy___stdZassertions_u74((*dest_p0).Sup.Sup.trace);
	{
		NIM_BOOL T8_;
		T8_ = (NIM_BOOL)0;
		T8_ = nimDecRefIsLastCyclicDyn((*dest_p0).Sup.Sup.up);
		if (!T8_) goto LA9_;
		nimDestroyAndDispose((*dest_p0).Sup.Sup.up);
	}
LA9_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, rttiDestroy__systemZexceptions_u56)(void* dest_p0) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	eqdestroy___system_u8899(((tyObject_IOError__YfyTxe9cThBYfr9aHkc9cltBw*) (dest_p0)));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
}
static N_INLINE(void, add__system_u3011)(tyObject_CellSeq__gJgGhndQf4jMmiPOrKMxRg* s_p0, void** c_p1, TNimTypeV2* t_p2) {
	void** colontmp_;
	TNimTypeV2* colontmp__2;
	{
		if (!((*s_p0).cap <= (*s_p0).len)) goto LA3_;
		resize__system_u3019(s_p0);
	}
LA3_: ;
	colontmp_ = c_p1;
	colontmp__2 = t_p2;
	(*s_p0).d[(*s_p0).len].Field0 = colontmp_;
	(*s_p0).d[(*s_p0).len].Field1 = colontmp__2;
	(*s_p0).len += ((NI)1);
}
static N_INLINE(void, nimTraceRefDyn)(void* q_p0, void* env_p1) {
	void** p;
	p = ((void**) (q_p0));
	{
		tyObject_GcEnv__ya2EvOe4TJjBgsQr2pyzfQ* j;
		if (!!(((*p) == NIM_NIL))) goto LA3_;
		j = ((tyObject_GcEnv__ya2EvOe4TJjBgsQr2pyzfQ*) (env_p1));
		add__system_u3011((&(*j).traceStack), p, (*((TNimTypeV2**) ((*p)))));
	}
LA3_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, eqtrace___system_u8911)(tyObject_IOError__YfyTxe9cThBYfr9aHkc9cltBw* dest_p0, void* env_p1) {
	nimTraceRefDyn(&(*dest_p0).Sup.Sup.parent, env_p1);
	nimTraceRefDyn(&(*dest_p0).Sup.Sup.up, env_p1);
}
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___system_u8058)(tyObject_ValueError__tkID4So8lTV9byDQqIe8LtQ* dest_p0) {
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = nimDecRefIsLastCyclicDyn((*dest_p0).Sup.Sup.parent);
		if (!T3_) goto LA4_;
		nimDestroyAndDispose((*dest_p0).Sup.Sup.parent);
	}
LA4_: ;
	if ((*dest_p0).Sup.Sup.message.p && !((*dest_p0).Sup.Sup.message.p->cap & NIM_STRLIT_FLAG)) {
 deallocShared((*dest_p0).Sup.Sup.message.p);
}
	eqdestroy___stdZassertions_u74((*dest_p0).Sup.Sup.trace);
	{
		NIM_BOOL T8_;
		T8_ = (NIM_BOOL)0;
		T8_ = nimDecRefIsLastCyclicDyn((*dest_p0).Sup.Sup.up);
		if (!T8_) goto LA9_;
		nimDestroyAndDispose((*dest_p0).Sup.Sup.up);
	}
LA9_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, rttiDestroy__systemZexceptions_u58)(void* dest_p0) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	eqdestroy___system_u8058(((tyObject_ValueError__tkID4So8lTV9byDQqIe8LtQ*) (dest_p0)));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, eqtrace___system_u8070)(tyObject_ValueError__tkID4So8lTV9byDQqIe8LtQ* dest_p0, void* env_p1) {
	nimTraceRefDyn(&(*dest_p0).Sup.Sup.parent, env_p1);
	nimTraceRefDyn(&(*dest_p0).Sup.Sup.up, env_p1);
}
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___pureZjson_u3350)(tyObject_KeyError__lnof7UhkKLTGVjjzWWC5Qg* dest_p0) {
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = nimDecRefIsLastCyclicDyn((*dest_p0).Sup.Sup.Sup.parent);
		if (!T3_) goto LA4_;
		nimDestroyAndDispose((*dest_p0).Sup.Sup.Sup.parent);
	}
LA4_: ;
	if ((*dest_p0).Sup.Sup.Sup.message.p && !((*dest_p0).Sup.Sup.Sup.message.p->cap & NIM_STRLIT_FLAG)) {
 deallocShared((*dest_p0).Sup.Sup.Sup.message.p);
}
	eqdestroy___stdZassertions_u74((*dest_p0).Sup.Sup.Sup.trace);
	{
		NIM_BOOL T8_;
		T8_ = (NIM_BOOL)0;
		T8_ = nimDecRefIsLastCyclicDyn((*dest_p0).Sup.Sup.Sup.up);
		if (!T8_) goto LA9_;
		nimDestroyAndDispose((*dest_p0).Sup.Sup.Sup.up);
	}
LA9_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, rttiDestroy__systemZexceptions_u60)(void* dest_p0) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	eqdestroy___pureZjson_u3350(((tyObject_KeyError__lnof7UhkKLTGVjjzWWC5Qg*) (dest_p0)));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, eqtrace___pureZjson_u3362)(tyObject_KeyError__lnof7UhkKLTGVjjzWWC5Qg* dest_p0, void* env_p1) {
	nimTraceRefDyn(&(*dest_p0).Sup.Sup.Sup.parent, env_p1);
	nimTraceRefDyn(&(*dest_p0).Sup.Sup.Sup.up, env_p1);
}
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___stdZoserrors_u60)(tyObject_OSError__g5aWKLnwFOcW9cBfUnw9cYgA* dest_p0) {
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = nimDecRefIsLastCyclicDyn((*dest_p0).Sup.Sup.parent);
		if (!T3_) goto LA4_;
		nimDestroyAndDispose((*dest_p0).Sup.Sup.parent);
	}
LA4_: ;
	if ((*dest_p0).Sup.Sup.message.p && !((*dest_p0).Sup.Sup.message.p->cap & NIM_STRLIT_FLAG)) {
 deallocShared((*dest_p0).Sup.Sup.message.p);
}
	eqdestroy___stdZassertions_u74((*dest_p0).Sup.Sup.trace);
	{
		NIM_BOOL T8_;
		T8_ = (NIM_BOOL)0;
		T8_ = nimDecRefIsLastCyclicDyn((*dest_p0).Sup.Sup.up);
		if (!T8_) goto LA9_;
		nimDestroyAndDispose((*dest_p0).Sup.Sup.up);
	}
LA9_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, rttiDestroy__systemZexceptions_u62)(void* dest_p0) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	eqdestroy___stdZoserrors_u60(((tyObject_OSError__g5aWKLnwFOcW9cBfUnw9cYgA*) (dest_p0)));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, eqtrace___stdZoserrors_u72)(tyObject_OSError__g5aWKLnwFOcW9cBfUnw9cYgA* dest_p0, void* env_p1) {
	nimTraceRefDyn(&(*dest_p0).Sup.Sup.parent, env_p1);
	nimTraceRefDyn(&(*dest_p0).Sup.Sup.up, env_p1);
}
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___system_u4742)(tyObject_IndexDefect__8x8uaszBx9boroLUKgH6obQ* dest_p0) {
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = nimDecRefIsLastCyclicDyn((*dest_p0).Sup.Sup.parent);
		if (!T3_) goto LA4_;
		nimDestroyAndDispose((*dest_p0).Sup.Sup.parent);
	}
LA4_: ;
	if ((*dest_p0).Sup.Sup.message.p && !((*dest_p0).Sup.Sup.message.p->cap & NIM_STRLIT_FLAG)) {
 deallocShared((*dest_p0).Sup.Sup.message.p);
}
	eqdestroy___stdZassertions_u74((*dest_p0).Sup.Sup.trace);
	{
		NIM_BOOL T8_;
		T8_ = (NIM_BOOL)0;
		T8_ = nimDecRefIsLastCyclicDyn((*dest_p0).Sup.Sup.up);
		if (!T8_) goto LA9_;
		nimDestroyAndDispose((*dest_p0).Sup.Sup.up);
	}
LA9_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, rttiDestroy__systemZexceptions_u64)(void* dest_p0) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	eqdestroy___system_u4742(((tyObject_IndexDefect__8x8uaszBx9boroLUKgH6obQ*) (dest_p0)));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, eqtrace___system_u4754)(tyObject_IndexDefect__8x8uaszBx9boroLUKgH6obQ* dest_p0, void* env_p1) {
	nimTraceRefDyn(&(*dest_p0).Sup.Sup.parent, env_p1);
	nimTraceRefDyn(&(*dest_p0).Sup.Sup.up, env_p1);
}
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___system_u4516)(tyObject_ReraiseDefect__8429cG9aqewm0cJvfSU88icA* dest_p0) {
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = nimDecRefIsLastCyclicDyn((*dest_p0).Sup.Sup.parent);
		if (!T3_) goto LA4_;
		nimDestroyAndDispose((*dest_p0).Sup.Sup.parent);
	}
LA4_: ;
	if ((*dest_p0).Sup.Sup.message.p && !((*dest_p0).Sup.Sup.message.p->cap & NIM_STRLIT_FLAG)) {
 deallocShared((*dest_p0).Sup.Sup.message.p);
}
	eqdestroy___stdZassertions_u74((*dest_p0).Sup.Sup.trace);
	{
		NIM_BOOL T8_;
		T8_ = (NIM_BOOL)0;
		T8_ = nimDecRefIsLastCyclicDyn((*dest_p0).Sup.Sup.up);
		if (!T8_) goto LA9_;
		nimDestroyAndDispose((*dest_p0).Sup.Sup.up);
	}
LA9_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, rttiDestroy__systemZexceptions_u66)(void* dest_p0) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	eqdestroy___system_u4516(((tyObject_ReraiseDefect__8429cG9aqewm0cJvfSU88icA*) (dest_p0)));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, eqtrace___system_u4528)(tyObject_ReraiseDefect__8429cG9aqewm0cJvfSU88icA* dest_p0, void* env_p1) {
	nimTraceRefDyn(&(*dest_p0).Sup.Sup.parent, env_p1);
	nimTraceRefDyn(&(*dest_p0).Sup.Sup.up, env_p1);
}
