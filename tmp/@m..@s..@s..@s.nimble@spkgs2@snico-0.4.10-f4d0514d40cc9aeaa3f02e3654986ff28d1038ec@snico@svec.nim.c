/* Generated by Nim Compiler v2.2.2 */
/* Compiled for: Linux, wasm32, clang */
/* Command for C compiler:
   emcc -c -w -ferror-limit=3 -pthread -flto -O3   -I/home/gregis/.choosenim/toolchains/nim-2.2.2/lib -I/home/gregis/Projects/OneLastBeat/src -o /home/gregis/Projects/OneLastBeat/tmp/@m..@s..@s..@s.nimble@spkgs2@snico-0.4.10-f4d0514d40cc9aeaa3f02e3654986ff28d1038ec@snico@svec.nim.c.o /home/gregis/Projects/OneLastBeat/tmp/@m..@s..@s..@s.nimble@spkgs2@snico-0.4.10-f4d0514d40cc9aeaa3f02e3654986ff28d1038ec@snico@svec.nim.c */
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
typedef NF32 tyArray__4YxcnnI8do9a6vmNKtzdSKw[2];
static N_INLINE(void, nimZeroMem)(void* p_p0, NI size_p1);
static N_INLINE(void, nimSetMem__systemZmemory_u7)(void* a_p0, int v_p1, NI size_p2);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
extern NIM_THREADVAR NIM_BOOL nimInErrorMode__system_u4433;
static N_INLINE(void, nimSetMem__systemZmemory_u7)(void* a_p0, int v_p1, NI size_p2) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memset(a_p0, v_p1, ((size_t) (size_p2)));
}
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void) {
	NIM_BOOL* result;
	result = (&nimInErrorMode__system_u4433);
	return result;
}
static N_INLINE(void, nimZeroMem)(void* p_p0, NI size_p1) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	nimSetMem__systemZmemory_u7(p_p0, ((int)0), size_p1);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, vec2f__benkei_u12)(NI x_p0, NI y_p1, tyArray__4YxcnnI8do9a6vmNKtzdSKw Result) {
	nimZeroMem((void*)Result, sizeof(tyArray__4YxcnnI8do9a6vmNKtzdSKw));
	Result[(((NI)0))- 0] = ((NF32) (x_p0));
	Result[(((NI)1))- 0] = ((NF32) (y_p1));
}
