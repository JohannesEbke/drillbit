
#include <assert.h>
#include "dasm_proto.h"


#if defined(__i386) || defined(__i386__) || defined(_M_IX86)
#include "dasm_x86.h"
#elif defined(__x86_64__) || defined(__x86_64) || defined(_M_X64) || defined(_M_AMD64)
#include "dasm_x86.h"
#elif defined(__arm__) || defined(__arm) || defined(__ARM__) || defined(__ARM)
#include "dasm_arm.h"
#elif defined(__ppc__) || defined(__ppc) || defined(__PPC__) || defined(__PPC) || defined(__powerpc__) || defined(__powerpc) || defined(__POWERPC__) || defined(__POWERPC) || defined(_M_PPC)
#ifdef __NO_FPRS__
#include "dasm_ppc.h"
#else
#include "dasm_ppc.h"
#endif
#elif defined(__mips__) || defined(__mips) || defined(__MIPS__) || defined(__MIPS)
#include "dasm_mips.h"
#else
#error "No support for this architecture (yet)"
#endif
