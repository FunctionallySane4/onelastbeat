/* Generated by Nim Compiler v2.2.2 */
/* Compiled for: Linux, wasm32, clang */
/* Command for C compiler:
   emcc -c -w -ferror-limit=3 -pthread -flto -O3   -I/home/gregis/.choosenim/toolchains/nim-2.2.2/lib -I/home/gregis/Projects/OneLastBeat/src -o /home/gregis/Projects/OneLastBeat/tmp/@mai.nim.c.o /home/gregis/Projects/OneLastBeat/tmp/@mai.nim.c */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <string.h>
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
typedef struct tySequence__ODAiMr50iWPGXmGFyO9au0w tySequence__ODAiMr50iWPGXmGFyO9au0w;
typedef struct tySequence__ODAiMr50iWPGXmGFyO9au0w_Content tySequence__ODAiMr50iWPGXmGFyO9au0w_Content;
typedef struct tyTuple__gfz23PD1jgX40Hus9aUuu0A tyTuple__gfz23PD1jgX40Hus9aUuu0A;
typedef struct tyObject_BtnDefcolonObjectType___TpOn9bnlrKIa3Q55B57IQjg tyObject_BtnDefcolonObjectType___TpOn9bnlrKIa3Q55B57IQjg;
typedef struct tySequence__kl2zhG9abb3gLSE3TcJk5ZQ tySequence__kl2zhG9abb3gLSE3TcJk5ZQ;
typedef struct tySequence__kl2zhG9abb3gLSE3TcJk5ZQ_Content tySequence__kl2zhG9abb3gLSE3TcJk5ZQ_Content;
typedef struct tyTuple__GY9aNItjnkk9b0a9aSZVsTZLw tyTuple__GY9aNItjnkk9b0a9aSZVsTZLw;
typedef struct tyObject_CharactercolonObjectType___GNtIvodqMgdkSCDNOnirUw tyObject_CharactercolonObjectType___GNtIvodqMgdkSCDNOnirUw;
typedef struct tyObject_RefHeader__gnJExvuIhzi79cQetGScWGg tyObject_RefHeader__gnJExvuIhzi79cQetGScWGg;
typedef struct tyObject_Env_aidotnim_generate_inputs___auFnN27iZtch03g9bDVTHQA tyObject_Env_aidotnim_generate_inputs___auFnN27iZtch03g9bDVTHQA;
typedef struct RootObj RootObj;
typedef struct TNimTypeV2 TNimTypeV2;
typedef struct tyObject_NimRawSeq__9b6RdVy2lPuLTXrjFWjwuPQ tyObject_NimRawSeq__9b6RdVy2lPuLTXrjFWjwuPQ;
typedef struct tyTuple__WzC855GRbN1oa1MQLNUxMg tyTuple__WzC855GRbN1oa1MQLNUxMg;
typedef struct tySequence__GHakQUv3U4sqtgNfso8szQ tySequence__GHakQUv3U4sqtgNfso8szQ;
typedef struct tySequence__GHakQUv3U4sqtgNfso8szQ_Content tySequence__GHakQUv3U4sqtgNfso8szQ_Content;
typedef struct tyObject_HSlice__DO5p5S32LbatC4OszWRAIA tyObject_HSlice__DO5p5S32LbatC4OszWRAIA;
typedef struct tyObject_HeartcolonObjectType___WXaf61UFtt012QW9cg6Ni8w tyObject_HeartcolonObjectType___WXaf61UFtt012QW9cg6Ni8w;
typedef struct tyObject_CollisionBoxcolonObjectType___hijtiu9bkCo9clB9cPME9cclmA tyObject_CollisionBoxcolonObjectType___hijtiu9bkCo9clB9cPME9cclmA;
typedef struct tySequence__mSbx4ac9awsG2xzbj9b9aZvYQ tySequence__mSbx4ac9awsG2xzbj9b9aZvYQ;
typedef struct tySequence__mSbx4ac9awsG2xzbj9b9aZvYQ_Content tySequence__mSbx4ac9awsG2xzbj9b9aZvYQ_Content;
typedef struct tyObject_ProjectilecolonObjectType___s9cbJvRfjd9cFWzwbL6539b9aA tyObject_ProjectilecolonObjectType___s9cbJvRfjd9cFWzwbL6539b9aA;
typedef struct tyObject_HitboxcolonObjectType___zzXrvetNM0doggw4uVgt4g tyObject_HitboxcolonObjectType___zzXrvetNM0doggw4uVgt4g;
struct tySequence__ODAiMr50iWPGXmGFyO9au0w {
  NI len; tySequence__ODAiMr50iWPGXmGFyO9au0w_Content* p;
};
typedef NU8 tyEnum_AIBtn__B5W7MWqxKrA8cqndnYD8sA;
struct tyTuple__gfz23PD1jgX40Hus9aUuu0A {
	tyEnum_AIBtn__B5W7MWqxKrA8cqndnYD8sA Field0;
	NI Field1;
};
struct tySequence__kl2zhG9abb3gLSE3TcJk5ZQ {
  NI len; tySequence__kl2zhG9abb3gLSE3TcJk5ZQ_Content* p;
};
typedef NU8 tyEnum_BtnState__a6kTzZnnx7Ll6D9b59bwIyIQ;
struct tyTuple__GY9aNItjnkk9b0a9aSZVsTZLw {
	tyEnum_AIBtn__B5W7MWqxKrA8cqndnYD8sA Field0;
	NI Field1;
	tyEnum_BtnState__a6kTzZnnx7Ll6D9b59bwIyIQ Field2;
};
struct tyObject_BtnDefcolonObjectType___TpOn9bnlrKIa3Q55B57IQjg {
	tySequence__kl2zhG9abb3gLSE3TcJk5ZQ stack;
	NI reset_frame;
	NI frame_elapsed;
	tyObject_CharactercolonObjectType___GNtIvodqMgdkSCDNOnirUw* character;
	tySequence__ODAiMr50iWPGXmGFyO9au0w input_cands;
};
struct tyObject_RefHeader__gnJExvuIhzi79cQetGScWGg {
	NI rc;
	NI rootIdx;
};
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
struct RootObj {
	TNimTypeV2* m_type;
};
struct tyObject_Env_aidotnim_generate_inputs___auFnN27iZtch03g9bDVTHQA {
	RootObj Sup;
	tyObject_BtnDefcolonObjectType___TpOn9bnlrKIa3Q55B57IQjg* btndef0;
	NI reset_frame1;
};
struct tyObject_NimRawSeq__9b6RdVy2lPuLTXrjFWjwuPQ {
	NI len;
	void* p;
};
struct tyTuple__WzC855GRbN1oa1MQLNUxMg {
	tyTuple__GY9aNItjnkk9b0a9aSZVsTZLw Field0;
	tyTuple__GY9aNItjnkk9b0a9aSZVsTZLw Field1;
	tyTuple__GY9aNItjnkk9b0a9aSZVsTZLw Field2;
};
struct tySequence__GHakQUv3U4sqtgNfso8szQ {
  NI len; tySequence__GHakQUv3U4sqtgNfso8szQ_Content* p;
};
struct tyObject_HSlice__DO5p5S32LbatC4OszWRAIA {
	NI a;
	NI b;
};
typedef struct {
N_NIMCALL_PTR(void, ClP_0) (tyTuple__WzC855GRbN1oa1MQLNUxMg* Result, void* ClE_0);
void* ClE_0;
} tyProc__bh8KmkqikNEAG5B2BIRrmg;
typedef N_CLOSURE_PTR(void, TM__NbwEFXHvIi7QWjGyyqdkSg_9) (tyTuple__WzC855GRbN1oa1MQLNUxMg* Result);
typedef NU8 tyEnum_State__BXhE0v2wjSR5Sst324uAcw;
typedef NF32 tyArray__4YxcnnI8do9a6vmNKtzdSKw[2];
typedef NU8 tyEnum_Direction__JFoCXewRFqVfZPPeM6aDFg;
struct tySequence__mSbx4ac9awsG2xzbj9b9aZvYQ {
  NI len; tySequence__mSbx4ac9awsG2xzbj9b9aZvYQ_Content* p;
};
struct tyObject_CharactercolonObjectType___GNtIvodqMgdkSCDNOnirUw {
	tyObject_HeartcolonObjectType___WXaf61UFtt012QW9cg6Ni8w* heart;
	tyEnum_State__BXhE0v2wjSR5Sst324uAcw state;
	tyArray__4YxcnnI8do9a6vmNKtzdSKw position;
	tyArray__4YxcnnI8do9a6vmNKtzdSKw hand_pos;
	NI sprite_slot;
	NI frame;
	NF32 step;
	tyEnum_Direction__JFoCXewRFqVfZPPeM6aDFg facing;
	NF32 speed;
	NF32 dash_speed;
	tyObject_CollisionBoxcolonObjectType___hijtiu9bkCo9clB9cPME9cclmA* hurtbox;
	tyObject_CollisionBoxcolonObjectType___hijtiu9bkCo9clB9cPME9cclmA* hitbox;
	tySequence__mSbx4ac9awsG2xzbj9b9aZvYQ hitboxes;
	NF32 distance_from_opp;
	tyObject_ProjectilecolonObjectType___s9cbJvRfjd9cFWzwbL6539b9aA* projectile;
};
struct tySequence__ODAiMr50iWPGXmGFyO9au0w_Content { NI cap; tyTuple__gfz23PD1jgX40Hus9aUuu0A data[SEQ_DECL_SIZE]; };
struct tySequence__kl2zhG9abb3gLSE3TcJk5ZQ_Content { NI cap; tyTuple__GY9aNItjnkk9b0a9aSZVsTZLw data[SEQ_DECL_SIZE]; };
struct tySequence__GHakQUv3U4sqtgNfso8szQ_Content { NI cap; tyEnum_AIBtn__B5W7MWqxKrA8cqndnYD8sA data[SEQ_DECL_SIZE]; };
struct tySequence__mSbx4ac9awsG2xzbj9b9aZvYQ_Content { NI cap; tyObject_HitboxcolonObjectType___zzXrvetNM0doggw4uVgt4g* data[SEQ_DECL_SIZE]; };
N_LIB_PRIVATE N_NIMCALL(void, randomize__pureZrandom_u377)(void);
N_LIB_PRIVATE N_NIMCALL(void*, newSeqPayload)(NI cap_p0, NI elemSize_p1, NI elemAlign_p2);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
N_LIB_PRIVATE N_NIMCALL(void, setLen__ai_u85)(tySequence__ODAiMr50iWPGXmGFyO9au0w* s_p0, NI newlen_p1);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___ai_u608)(tySequence__kl2zhG9abb3gLSE3TcJk5ZQ dest_p0);
N_LIB_PRIVATE N_NIMCALL(void, alignedDealloc)(void* p_p0, NI align_p1);
static N_INLINE(NIM_BOOL, nimDecRefIsLast)(void* p_p0);
static N_INLINE(NI, minuspercent___system_u813)(NI x_p0, NI y_p1);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___benkei_u171)(tyObject_CharactercolonObjectType___GNtIvodqMgdkSCDNOnirUw* dest_p0);
N_LIB_PRIVATE N_NIMCALL(void, nimRawDispose)(void* p_p0, NI alignment_p1);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___ai_u65)(tySequence__ODAiMr50iWPGXmGFyO9au0w dest_p0);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___ai_u724)(tyObject_BtnDefcolonObjectType___TpOn9bnlrKIa3Q55B57IQjg* dest_p0);
static N_INLINE(void, nimIncRef)(void* p_p0);
N_LIB_PRIVATE N_NIMCALL(void*, nimNewObj)(NI size_p0, NI alignment_p1);
N_LIB_PRIVATE N_NIMCALL(void, rttiDestroy__ai_u964)(void* dest_p0);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___ai_u911)(tyObject_Env_aidotnim_generate_inputs___auFnN27iZtch03g9bDVTHQA* dest_p0);
N_LIB_PRIVATE N_NIMCALL(void, eqcopy___ai_u709)(tyObject_BtnDefcolonObjectType___TpOn9bnlrKIa3Q55B57IQjg** dest_p0, tyObject_BtnDefcolonObjectType___TpOn9bnlrKIa3Q55B57IQjg* src_p1);
N_LIB_PRIVATE N_NIMCALL(void, eqcopy___ai_u611)(tySequence__kl2zhG9abb3gLSE3TcJk5ZQ* dest_p0, tySequence__kl2zhG9abb3gLSE3TcJk5ZQ src_p1);
static N_INLINE(NIM_BOOL, sameSeqPayload)(void* x_p0, void* y_p1);
N_LIB_PRIVATE N_NIMCALL(void, setLen__ai_u628)(tySequence__kl2zhG9abb3gLSE3TcJk5ZQ* s_p0, NI newlen_p1);
static N_INLINE(void, nimZeroMem)(void* p_p0, NI size_p1);
static N_INLINE(void, nimSetMem__systemZmemory_u7)(void* a_p0, int v_p1, NI size_p2);
N_LIB_PRIVATE N_CLOSURE(void, random_input__ai_u405)(tyTuple__WzC855GRbN1oa1MQLNUxMg* Result, void* ClE_0);
N_LIB_PRIVATE N_NIMCALL(tySequence__GHakQUv3U4sqtgNfso8szQ, candidate_inputs__ai_u187)(tySequence__ODAiMr50iWPGXmGFyO9au0w candidates_p0);
N_LIB_PRIVATE N_NIMCALL(void, add__ai_u220)(tySequence__GHakQUv3U4sqtgNfso8szQ* x_p0, tyEnum_AIBtn__B5W7MWqxKrA8cqndnYD8sA y_p1);
N_LIB_PRIVATE N_NIMCALL(void, eqwasMoved___ai_u245)(tySequence__GHakQUv3U4sqtgNfso8szQ* dest_p0);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___ai_u248)(tySequence__GHakQUv3U4sqtgNfso8szQ dest_p0);
N_LIB_PRIVATE N_NIMCALL(NI, rand__ai_u424)(tyObject_HSlice__DO5p5S32LbatC4OszWRAIA x_p0);
static N_INLINE(tyObject_HSlice__DO5p5S32LbatC4OszWRAIA, dotdot___stdZstrbasics_u48)(NI a_p0, NI b_p1);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, eqeq___ai_u555)(tyTuple__GY9aNItjnkk9b0a9aSZVsTZLw x_p0, tyTuple__GY9aNItjnkk9b0a9aSZVsTZLw y_p1);
N_LIB_PRIVATE N_NIMCALL(void, add__ai_u573)(tySequence__kl2zhG9abb3gLSE3TcJk5ZQ* x_p0, tyTuple__GY9aNItjnkk9b0a9aSZVsTZLw y_p1);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___ai_u943)(tyObject_Env_aidotnim_generate_inputs___auFnN27iZtch03g9bDVTHQA* dest_p0);
static N_INLINE(NIM_BOOL, nimDecRefIsLastCyclicDyn)(void* p_p0);
N_LIB_PRIVATE N_NOINLINE(void, rememberCycle__system_u3528)(NIM_BOOL isDestroyAction_p0, tyObject_RefHeader__gnJExvuIhzi79cQetGScWGg* s_p1, TNimTypeV2* desc_p2);
N_LIB_PRIVATE N_NIMCALL(void, nimDestroyAndDispose)(void* p_p0);
N_LIB_PRIVATE N_NIMCALL(void, eqcopy___benkei_u261)(tyObject_CharactercolonObjectType___GNtIvodqMgdkSCDNOnirUw** dest_p0, tyObject_CharactercolonObjectType___GNtIvodqMgdkSCDNOnirUw* src_p1);
N_LIB_PRIVATE N_NIMCALL(tyEnum_State__BXhE0v2wjSR5Sst324uAcw, get_character_state__ai_u166)(tyEnum_AIBtn__B5W7MWqxKrA8cqndnYD8sA button_p0, tyEnum_BtnState__a6kTzZnnx7Ll6D9b59bwIyIQ state_p1);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___benkei_u258)(tyObject_CharactercolonObjectType___GNtIvodqMgdkSCDNOnirUw* dest_p0);
N_LIB_PRIVATE N_NIMCALL(void, delete__ai_u770)(tySequence__kl2zhG9abb3gLSE3TcJk5ZQ* x_p0, NI i_p1);
N_LIB_PRIVATE N_NIMCALL(void, eqcopy___ai_u68)(tySequence__ODAiMr50iWPGXmGFyO9au0w* dest_p0, tySequence__ODAiMr50iWPGXmGFyO9au0w src_p1);
N_LIB_PRIVATE N_NIMCALL(void, nimTestErrorFlag)(void);
N_LIB_PRIVATE TNimTypeV2 NTIv2__auFnN27iZtch03g9bDVTHQA_;
static NIM_CONST tyTuple__gfz23PD1jgX40Hus9aUuu0A TM__NbwEFXHvIi7QWjGyyqdkSg_2 = {((tyEnum_AIBtn__B5W7MWqxKrA8cqndnYD8sA)0),
((NI)8)}
;
static NIM_CONST tyTuple__gfz23PD1jgX40Hus9aUuu0A TM__NbwEFXHvIi7QWjGyyqdkSg_3 = {((tyEnum_AIBtn__B5W7MWqxKrA8cqndnYD8sA)1),
((NI)1)}
;
static NIM_CONST tyTuple__gfz23PD1jgX40Hus9aUuu0A TM__NbwEFXHvIi7QWjGyyqdkSg_4 = {((tyEnum_AIBtn__B5W7MWqxKrA8cqndnYD8sA)4),
((NI)1)}
;
static NIM_CONST tyTuple__gfz23PD1jgX40Hus9aUuu0A TM__NbwEFXHvIi7QWjGyyqdkSg_5 = {((tyEnum_AIBtn__B5W7MWqxKrA8cqndnYD8sA)2),
((NI)10)}
;
static NIM_CONST tyTuple__gfz23PD1jgX40Hus9aUuu0A TM__NbwEFXHvIi7QWjGyyqdkSg_6 = {((tyEnum_AIBtn__B5W7MWqxKrA8cqndnYD8sA)0),
((NI)3)}
;
static NIM_CONST tyTuple__gfz23PD1jgX40Hus9aUuu0A TM__NbwEFXHvIi7QWjGyyqdkSg_7 = {((tyEnum_AIBtn__B5W7MWqxKrA8cqndnYD8sA)1),
((NI)5)}
;
N_LIB_PRIVATE tySequence__ODAiMr50iWPGXmGFyO9au0w approach__ai_u48;
N_LIB_PRIVATE tySequence__ODAiMr50iWPGXmGFyO9au0w slow_attack__ai_u59;
extern NIM_THREADVAR NIM_BOOL nimInErrorMode__system_u4433;
static NIM_CONST NU32 TM__NbwEFXHvIi7QWjGyyqdkSg_8[2] = {3701606400, 3781637888};
N_LIB_PRIVATE TNimTypeV2 NTIv2__auFnN27iZtch03g9bDVTHQA_ = {.destructor = (void*)rttiDestroy__ai_u964, .size = sizeof(tyObject_Env_aidotnim_generate_inputs___auFnN27iZtch03g9bDVTHQA), .align = (NI16) NIM_ALIGNOF(tyObject_Env_aidotnim_generate_inputs___auFnN27iZtch03g9bDVTHQA), .depth = 1, .display = TM__NbwEFXHvIi7QWjGyyqdkSg_8, .traceImpl = (void*)NIM_NIL, .flags = 0};
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void) {
	NIM_BOOL* result;
	result = (&nimInErrorMode__system_u4433);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(tySequence__ODAiMr50iWPGXmGFyO9au0w, eqdup___ai_u71)(tySequence__ODAiMr50iWPGXmGFyO9au0w src_p0) {
	tySequence__ODAiMr50iWPGXmGFyO9au0w result;
	NI T1_;
	NI colontmp_;
	result.len = 0; result.p = NIM_NIL;
	T1_ = src_p0.len;
	setLen__ai_u85((&result), T1_);
	colontmp_ = ((NI)0);
	{
		while (1) {
			NI T4_;
			T4_ = result.len;
			if (!(colontmp_ < T4_)) goto LA3;
			result.p->data[colontmp_].Field0 = src_p0.p->data[colontmp_].Field0;
			result.p->data[colontmp_].Field1 = src_p0.p->data[colontmp_].Field1;
			colontmp_ += ((NI)1);
		} LA3: ;
	}
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, eqwasMoved___ai_u703)(tyObject_BtnDefcolonObjectType___TpOn9bnlrKIa3Q55B57IQjg** dest_p0) {
	(*dest_p0) = 0;
}
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___ai_u608)(tySequence__kl2zhG9abb3gLSE3TcJk5ZQ dest_p0) {
	if (dest_p0.p && !(dest_p0.p->cap & NIM_STRLIT_FLAG)) {
 alignedDealloc(dest_p0.p, NIM_ALIGNOF(tyTuple__GY9aNItjnkk9b0a9aSZVsTZLw));
}
}
static N_INLINE(NI, minuspercent___system_u813)(NI x_p0, NI y_p1) {
	NI result;
	result = ((NI) ((NU)((NU32)(((NU) (x_p0))) - (NU32)(((NU) (y_p1))))));
	return result;
}
static N_INLINE(NIM_BOOL, nimDecRefIsLast)(void* p_p0) {
	NIM_BOOL result;
	result = NIM_FALSE;
	{
		tyObject_RefHeader__gnJExvuIhzi79cQetGScWGg* cell;
		NI T5_;
		if (!!((p_p0 == NIM_NIL))) goto LA3_;
		T5_ = (NI)0;
		T5_ = minuspercent___system_u813(((NI) (ptrdiff_t) (p_p0)), ((NI)8));
		cell = ((tyObject_RefHeader__gnJExvuIhzi79cQetGScWGg*) (T5_));
		{
			if (!((NI)((NI32)((*cell).rc) >> (NU32)(((NI)4))) == ((NI)0))) goto LA8_;
			result = NIM_TRUE;
		}
		goto LA6_;
LA8_: ;
		{
			(*cell).rc -= ((NI)16);
		}
LA6_: ;
	}
LA3_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___ai_u65)(tySequence__ODAiMr50iWPGXmGFyO9au0w dest_p0) {
	if (dest_p0.p && !(dest_p0.p->cap & NIM_STRLIT_FLAG)) {
 alignedDealloc(dest_p0.p, NIM_ALIGNOF(tyTuple__gfz23PD1jgX40Hus9aUuu0A));
}
}
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___ai_u724)(tyObject_BtnDefcolonObjectType___TpOn9bnlrKIa3Q55B57IQjg* dest_p0) {
	eqdestroy___ai_u608((*dest_p0).stack);
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = nimDecRefIsLast((*dest_p0).character);
		if (!T3_) goto LA4_;
		eqdestroy___benkei_u171((*dest_p0).character);
		nimRawDispose((*dest_p0).character, ((NI)4));
	}
LA4_: ;
	eqdestroy___ai_u65((*dest_p0).input_cands);
}
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___ai_u706)(tyObject_BtnDefcolonObjectType___TpOn9bnlrKIa3Q55B57IQjg* dest_p0) {
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = nimDecRefIsLast(dest_p0);
		if (!T3_) goto LA4_;
		eqdestroy___ai_u724(dest_p0);
		nimRawDispose(dest_p0, ((NI)4));
	}
LA4_: ;
}
static N_INLINE(void, nimIncRef)(void* p_p0) {
	NI T1_;
	T1_ = (NI)0;
	T1_ = minuspercent___system_u813(((NI) (ptrdiff_t) (p_p0)), ((NI)8));
	(*((tyObject_RefHeader__gnJExvuIhzi79cQetGScWGg*) (T1_))).rc += ((NI)16);
}
N_LIB_PRIVATE N_NIMCALL(void, eqcopy___ai_u709)(tyObject_BtnDefcolonObjectType___TpOn9bnlrKIa3Q55B57IQjg** dest_p0, tyObject_BtnDefcolonObjectType___TpOn9bnlrKIa3Q55B57IQjg* src_p1) {
	{
		if (!src_p1) goto LA3_;
		nimIncRef(src_p1);
	}
LA3_: ;
	{
		NIM_BOOL T7_;
		T7_ = (NIM_BOOL)0;
		T7_ = nimDecRefIsLast((*dest_p0));
		if (!T7_) goto LA8_;
		eqdestroy___ai_u724((*dest_p0));
		nimRawDispose((*dest_p0), ((NI)4));
	}
LA8_: ;
	(*dest_p0) = src_p1;
}
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___ai_u911)(tyObject_Env_aidotnim_generate_inputs___auFnN27iZtch03g9bDVTHQA* dest_p0) {
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = nimDecRefIsLast((*dest_p0).btndef0);
		if (!T3_) goto LA4_;
		eqdestroy___ai_u724((*dest_p0).btndef0);
		nimRawDispose((*dest_p0).btndef0, ((NI)4));
	}
LA4_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, rttiDestroy__ai_u964)(void* dest_p0) {
	eqdestroy___ai_u911(((tyObject_Env_aidotnim_generate_inputs___auFnN27iZtch03g9bDVTHQA*) (dest_p0)));
}
static N_INLINE(NIM_BOOL, sameSeqPayload)(void* x_p0, void* y_p1) {
	NIM_BOOL result;
	result = ((*((tyObject_NimRawSeq__9b6RdVy2lPuLTXrjFWjwuPQ*) (x_p0))).p == (*((tyObject_NimRawSeq__9b6RdVy2lPuLTXrjFWjwuPQ*) (y_p1))).p);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, eqcopy___ai_u611)(tySequence__kl2zhG9abb3gLSE3TcJk5ZQ* dest_p0, tySequence__kl2zhG9abb3gLSE3TcJk5ZQ src_p1) {
	NI T6_;
	NI colontmp_;
{	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = sameSeqPayload(dest_p0, (&src_p1));
		if (!T3_) goto LA4_;
		goto BeforeRet_;
	}
LA4_: ;
	T6_ = src_p1.len;
	setLen__ai_u628((&(*dest_p0)), T6_);
	colontmp_ = ((NI)0);
	{
		while (1) {
			NI T9_;
			T9_ = (*dest_p0).len;
			if (!(colontmp_ < T9_)) goto LA8;
			(*dest_p0).p->data[colontmp_].Field0 = src_p1.p->data[colontmp_].Field0;
			(*dest_p0).p->data[colontmp_].Field1 = src_p1.p->data[colontmp_].Field1;
			(*dest_p0).p->data[colontmp_].Field2 = src_p1.p->data[colontmp_].Field2;
			colontmp_ += ((NI)1);
		} LA8: ;
	}
	}BeforeRet_: ;
}
static N_INLINE(void, nimSetMem__systemZmemory_u7)(void* a_p0, int v_p1, NI size_p2) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memset(a_p0, v_p1, ((size_t) (size_p2)));
}
static N_INLINE(void, nimZeroMem)(void* p_p0, NI size_p1) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	nimSetMem__systemZmemory_u7(p_p0, ((int)0), size_p1);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(tySequence__GHakQUv3U4sqtgNfso8szQ, candidate_inputs__ai_u187)(tySequence__ODAiMr50iWPGXmGFyO9au0w candidates_p0) {
	tySequence__GHakQUv3U4sqtgNfso8szQ result;
	tySequence__GHakQUv3U4sqtgNfso8szQ stack;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result.len = 0; result.p = NIM_NIL;
	stack.len = 0; stack.p = NIM_NIL;
	stack.len = 0; stack.p = (tySequence__GHakQUv3U4sqtgNfso8szQ_Content*) newSeqPayload(0, sizeof(tyEnum_AIBtn__B5W7MWqxKrA8cqndnYD8sA), NIM_ALIGNOF(tyEnum_AIBtn__B5W7MWqxKrA8cqndnYD8sA));
	{
		tyTuple__gfz23PD1jgX40Hus9aUuu0A* c;
		NI i;
		NI L;
		NI T3_;
		c = (tyTuple__gfz23PD1jgX40Hus9aUuu0A*)0;
		i = ((NI)0);
		T3_ = candidates_p0.len;
		L = T3_;
		{
			while (1) {
				if (!(i < L)) goto LA5;
				c = (&candidates_p0.p->data[i]);
				{
					NI _;
					NI res;
					_ = (NI)0;
					res = ((NI)0);
					{
						while (1) {
							tyEnum_AIBtn__B5W7MWqxKrA8cqndnYD8sA colontmpD_;
							if (!(res <= (*c).Field1)) goto LA8;
							colontmpD_ = (tyEnum_AIBtn__B5W7MWqxKrA8cqndnYD8sA)0;
							_ = ((NI) (res));
							colontmpD_ = (*c).Field0;
							add__ai_u220((&stack), colontmpD_);
							res += ((NI)1);
						} LA8: ;
					}
				}
				i += ((NI)1);
			} LA5: ;
		}
	}
	result = stack;
	eqwasMoved___ai_u245((&stack));
	eqdestroy___ai_u248(stack);
	goto BeforeRet_;
	{
		LA1_:;
	}
	{
		eqdestroy___ai_u248(stack);
	}
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
static N_INLINE(tyObject_HSlice__DO5p5S32LbatC4OszWRAIA, dotdot___stdZstrbasics_u48)(NI a_p0, NI b_p1) {
	tyObject_HSlice__DO5p5S32LbatC4OszWRAIA result;
	result.a = a_p0;
	result.b = b_p1;
	return result;
}
N_LIB_PRIVATE N_CLOSURE(void, random_input__ai_u405)(tyTuple__WzC855GRbN1oa1MQLNUxMg* Result, void* ClE_0) {
	tyObject_Env_aidotnim_generate_inputs___auFnN27iZtch03g9bDVTHQA* colonenvP_;
	tySequence__GHakQUv3U4sqtgNfso8szQ input_list;
	tyTuple__GY9aNItjnkk9b0a9aSZVsTZLw extra;
	NI rng;
	NI T2_;
	tyObject_HSlice__DO5p5S32LbatC4OszWRAIA T3_;
	tyEnum_AIBtn__B5W7MWqxKrA8cqndnYD8sA button;
	NI p_frames;
	tyObject_HSlice__DO5p5S32LbatC4OszWRAIA T4_;
	NI r_frame;
	tyTuple__GY9aNItjnkk9b0a9aSZVsTZLw colontmp__4;
	tyTuple__GY9aNItjnkk9b0a9aSZVsTZLw colontmp__5;
	tyTuple__GY9aNItjnkk9b0a9aSZVsTZLw colontmp__6;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	nimZeroMem((void*)Result, sizeof(tyTuple__WzC855GRbN1oa1MQLNUxMg));
	colonenvP_ = (tyObject_Env_aidotnim_generate_inputs___auFnN27iZtch03g9bDVTHQA*) ClE_0;
	input_list.len = 0; input_list.p = NIM_NIL;
	nimZeroMem((void*)(&extra), sizeof(tyTuple__GY9aNItjnkk9b0a9aSZVsTZLw));
	input_list = candidate_inputs__ai_u187((*(*colonenvP_).btndef0).input_cands);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	T2_ = input_list.len;
	T3_ = dotdot___stdZstrbasics_u48(((NI)0), (NI)(T2_ - ((NI)1)));
	rng = rand__ai_u424(T3_);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	button = input_list.p->data[rng];
	T4_ = dotdot___stdZstrbasics_u48(((NI)1), (NI)((*colonenvP_).reset_frame1 / ((NI)2)));
	p_frames = rand__ai_u424(T4_);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	r_frame = (NI)((*colonenvP_).reset_frame1 - ((NI)1));
	{
		tyEnum_AIBtn__B5W7MWqxKrA8cqndnYD8sA colontmp_;
		NI colontmp__2;
		tyEnum_BtnState__a6kTzZnnx7Ll6D9b59bwIyIQ colontmp__3;
		if (!(button == ((tyEnum_AIBtn__B5W7MWqxKrA8cqndnYD8sA)2))) goto LA7_;
		colontmp_ = ((tyEnum_AIBtn__B5W7MWqxKrA8cqndnYD8sA)0);
		colontmp__2 = p_frames;
		colontmp__3 = ((tyEnum_BtnState__a6kTzZnnx7Ll6D9b59bwIyIQ)0);
		extra.Field0 = colontmp_;
		extra.Field1 = colontmp__2;
		extra.Field2 = colontmp__3;
	}
LA7_: ;
	colontmp__4.Field0 = button;
	colontmp__4.Field1 = p_frames;
	colontmp__4.Field2 = ((tyEnum_BtnState__a6kTzZnnx7Ll6D9b59bwIyIQ)0);
	colontmp__5.Field0 = button;
	colontmp__5.Field1 = r_frame;
	colontmp__5.Field2 = ((tyEnum_BtnState__a6kTzZnnx7Ll6D9b59bwIyIQ)1);
	colontmp__6 = extra;
	(*Result).Field0 = colontmp__4;
	(*Result).Field1 = colontmp__5;
	(*Result).Field2 = colontmp__6;
	eqdestroy___ai_u248(input_list);
	goto BeforeRet_;
	{
		LA1_:;
	}
	{
		eqdestroy___ai_u248(input_list);
	}
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
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
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___ai_u943)(tyObject_Env_aidotnim_generate_inputs___auFnN27iZtch03g9bDVTHQA* dest_p0) {
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = nimDecRefIsLastCyclicDyn(dest_p0);
		if (!T3_) goto LA4_;
		nimDestroyAndDispose(dest_p0);
	}
LA4_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, generate_inputs__ai_u401)(tyObject_BtnDefcolonObjectType___TpOn9bnlrKIa3Q55B57IQjg* btndef_p0) {
	tyObject_Env_aidotnim_generate_inputs___auFnN27iZtch03g9bDVTHQA* colonenv_;
	tySequence__kl2zhG9abb3gLSE3TcJk5ZQ stack;
	tyObject_Env_aidotnim_generate_inputs___auFnN27iZtch03g9bDVTHQA* T1_;
	tyTuple__WzC855GRbN1oa1MQLNUxMg new_input;
	tyProc__bh8KmkqikNEAG5B2BIRrmg T2_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	colonenv_ = NIM_NIL;
	stack.len = 0; stack.p = NIM_NIL;
	T1_ = NIM_NIL;
	T1_ = (tyObject_Env_aidotnim_generate_inputs___auFnN27iZtch03g9bDVTHQA*) nimNewObj(sizeof(tyObject_Env_aidotnim_generate_inputs___auFnN27iZtch03g9bDVTHQA), NIM_ALIGNOF(tyObject_Env_aidotnim_generate_inputs___auFnN27iZtch03g9bDVTHQA));
	(*T1_).Sup.m_type = (&NTIv2__auFnN27iZtch03g9bDVTHQA_);
	colonenv_ = T1_;
	eqcopy___ai_u709(&(*colonenv_).btndef0, btndef_p0);
	eqcopy___ai_u611((&stack), (*(*colonenv_).btndef0).stack);
	(*colonenv_).reset_frame1 = (*(*colonenv_).btndef0).reset_frame;
	nimZeroMem((void*)(&new_input), sizeof(tyTuple__WzC855GRbN1oa1MQLNUxMg));
	nimZeroMem((void*)(&T2_), sizeof(tyProc__bh8KmkqikNEAG5B2BIRrmg));
	T2_.ClP_0 = random_input__ai_u405; T2_.ClE_0 = colonenv_;
	T2_.ClE_0? T2_.ClP_0((&new_input), T2_.ClE_0):((TM__NbwEFXHvIi7QWjGyyqdkSg_9)(T2_.ClP_0))((&new_input));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	{
		NI T5_;
		T5_ = stack.len;
		if (!(T5_ <= ((NI)0))) goto LA6_;
		{
			tyTuple__GY9aNItjnkk9b0a9aSZVsTZLw T10_;
			NIM_BOOL T11_;
			nimZeroMem((void*)(&T10_), sizeof(tyTuple__GY9aNItjnkk9b0a9aSZVsTZLw));
			T11_ = (NIM_BOOL)0;
			T11_ = eqeq___ai_u555(new_input.Field2, T10_);
			if (!!(T11_)) goto LA12_;
			add__ai_u573((&(*(*colonenv_).btndef0).stack), new_input.Field2);
		}
LA12_: ;
		add__ai_u573((&(*(*colonenv_).btndef0).stack), new_input.Field0);
		add__ai_u573((&(*(*colonenv_).btndef0).stack), new_input.Field1);
	}
LA6_: ;
	eqdestroy___ai_u608(stack);
	eqdestroy___ai_u943(colonenv_);
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(tyEnum_State__BXhE0v2wjSR5Sst324uAcw, get_character_state__ai_u166)(tyEnum_AIBtn__B5W7MWqxKrA8cqndnYD8sA button_p0, tyEnum_BtnState__a6kTzZnnx7Ll6D9b59bwIyIQ state_p1) {
	tyEnum_State__BXhE0v2wjSR5Sst324uAcw result;
{	result = (tyEnum_State__BXhE0v2wjSR5Sst324uAcw)0;
	switch (button_p0) {
	case ((tyEnum_AIBtn__B5W7MWqxKrA8cqndnYD8sA)0):
	{
		{
			if (!(state_p1 == ((tyEnum_BtnState__a6kTzZnnx7Ll6D9b59bwIyIQ)0))) goto LA4_;
			result = ((tyEnum_State__BXhE0v2wjSR5Sst324uAcw)1);
			goto BeforeRet_;
		}
		goto LA2_;
LA4_: ;
		{
			result = ((tyEnum_State__BXhE0v2wjSR5Sst324uAcw)0);
			goto BeforeRet_;
		}
LA2_: ;
	}
	break;
	case ((tyEnum_AIBtn__B5W7MWqxKrA8cqndnYD8sA)1):
	{
		{
			if (!(state_p1 == ((tyEnum_BtnState__a6kTzZnnx7Ll6D9b59bwIyIQ)0))) goto LA10_;
			result = ((tyEnum_State__BXhE0v2wjSR5Sst324uAcw)2);
			goto BeforeRet_;
		}
		goto LA8_;
LA10_: ;
		{
			result = ((tyEnum_State__BXhE0v2wjSR5Sst324uAcw)0);
			goto BeforeRet_;
		}
LA8_: ;
	}
	break;
	case ((tyEnum_AIBtn__B5W7MWqxKrA8cqndnYD8sA)2):
	{
		{
			if (!(state_p1 == ((tyEnum_BtnState__a6kTzZnnx7Ll6D9b59bwIyIQ)0))) goto LA16_;
			result = ((tyEnum_State__BXhE0v2wjSR5Sst324uAcw)5);
			goto BeforeRet_;
		}
		goto LA14_;
LA16_: ;
		{
			if (!(state_p1 == ((tyEnum_BtnState__a6kTzZnnx7Ll6D9b59bwIyIQ)1))) goto LA19_;
			result = ((tyEnum_State__BXhE0v2wjSR5Sst324uAcw)6);
			goto BeforeRet_;
		}
		goto LA14_;
LA19_: ;
LA14_: ;
	}
	break;
	default:
	{
		result = ((tyEnum_State__BXhE0v2wjSR5Sst324uAcw)0);
		goto BeforeRet_;
	}
	break;
	}
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, eqwasMoved___ai_u478)(tyTuple__GY9aNItjnkk9b0a9aSZVsTZLw* dest_p0) {
	(*dest_p0).Field0 = 0;
	(*dest_p0).Field1 = 0;
	(*dest_p0).Field2 = 0;
}
N_LIB_PRIVATE N_NIMCALL(void, AI_update__ai_u759)(tyObject_BtnDefcolonObjectType___TpOn9bnlrKIa3Q55B57IQjg* btndef_p0) {
	tyObject_CharactercolonObjectType___GNtIvodqMgdkSCDNOnirUw* character;
	NI reset_frame;
	NI elapsed;
	tyTuple__GY9aNItjnkk9b0a9aSZVsTZLw head_input;
	tyEnum_State__BXhE0v2wjSR5Sst324uAcw char_state;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	character = NIM_NIL;
	eqcopy___benkei_u261(&character, (*btndef_p0).character);
	reset_frame = (*btndef_p0).reset_frame;
	elapsed = (*btndef_p0).frame_elapsed;
	head_input = (*btndef_p0).stack.p->data[((NI)0)];
	char_state = get_character_state__ai_u166(head_input.Field0, head_input.Field2);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	{
		if (!((*character).state == ((tyEnum_State__BXhE0v2wjSR5Sst324uAcw)10))) goto LA4_;
		eqdestroy___benkei_u258(character);
		goto BeforeRet_;
	}
LA4_: ;
	{
		if (!(reset_frame <= elapsed)) goto LA8_;
		(*btndef_p0).frame_elapsed = ((NI)0);
	}
LA8_: ;
	{
		if (!(elapsed == head_input.Field1)) goto LA12_;
		(*character).state = char_state;
		delete__ai_u770((&(*btndef_p0).stack), ((NI)0));
		if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	}
LA12_: ;
	(*btndef_p0).frame_elapsed += ((NI)1);
	{
		LA1_:;
	}
	{
		eqdestroy___benkei_u258(character);
	}
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, eqcopy___ai_u68)(tySequence__ODAiMr50iWPGXmGFyO9au0w* dest_p0, tySequence__ODAiMr50iWPGXmGFyO9au0w src_p1) {
	NI T6_;
	NI colontmp_;
{	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = sameSeqPayload(dest_p0, (&src_p1));
		if (!T3_) goto LA4_;
		goto BeforeRet_;
	}
LA4_: ;
	T6_ = src_p1.len;
	setLen__ai_u85((&(*dest_p0)), T6_);
	colontmp_ = ((NI)0);
	{
		while (1) {
			NI T9_;
			T9_ = (*dest_p0).len;
			if (!(colontmp_ < T9_)) goto LA8;
			(*dest_p0).p->data[colontmp_].Field0 = src_p1.p->data[colontmp_].Field0;
			(*dest_p0).p->data[colontmp_].Field1 = src_p1.p->data[colontmp_].Field1;
			colontmp_ += ((NI)1);
		} LA8: ;
	}
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, set_basic_ai__ai_u60)(tyObject_BtnDefcolonObjectType___TpOn9bnlrKIa3Q55B57IQjg* btndef_p0) {
	(*btndef_p0).reset_frame = ((NI)15);
	{
		if (!(40.0f <= (*(*btndef_p0).character).distance_from_opp)) goto LA3_;
		eqcopy___ai_u68((&(*btndef_p0).input_cands), approach__ai_u48);
	}
	goto LA1_;
LA3_: ;
	{
		eqcopy___ai_u68((&(*btndef_p0).input_cands), slow_attack__ai_u59);
	}
LA1_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, atmaidotnim_Init000)(void) {
{
NIM_BOOL* nimErr_;
nimErr_ = nimErrorFlag();
	randomize__pureZrandom_u377();
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	approach__ai_u48.len = 3; approach__ai_u48.p = (tySequence__ODAiMr50iWPGXmGFyO9au0w_Content*) newSeqPayload(3, sizeof(tyTuple__gfz23PD1jgX40Hus9aUuu0A), NIM_ALIGNOF(tyTuple__gfz23PD1jgX40Hus9aUuu0A));
	approach__ai_u48.p->data[0] = TM__NbwEFXHvIi7QWjGyyqdkSg_2;
	approach__ai_u48.p->data[1] = TM__NbwEFXHvIi7QWjGyyqdkSg_3;
	approach__ai_u48.p->data[2] = TM__NbwEFXHvIi7QWjGyyqdkSg_4;
	slow_attack__ai_u59.len = 3; slow_attack__ai_u59.p = (tySequence__ODAiMr50iWPGXmGFyO9au0w_Content*) newSeqPayload(3, sizeof(tyTuple__gfz23PD1jgX40Hus9aUuu0A), NIM_ALIGNOF(tyTuple__gfz23PD1jgX40Hus9aUuu0A));
	slow_attack__ai_u59.p->data[0] = TM__NbwEFXHvIi7QWjGyyqdkSg_5;
	slow_attack__ai_u59.p->data[1] = TM__NbwEFXHvIi7QWjGyyqdkSg_6;
	slow_attack__ai_u59.p->data[2] = TM__NbwEFXHvIi7QWjGyyqdkSg_7;
	BeforeRet_: ;
	nimTestErrorFlag();
}
}

