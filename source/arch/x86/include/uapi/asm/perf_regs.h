// /*AFLA*/ #ifndef _ASM_X86_PERF_REGS_H
// /*AFLA*/ #define _ASM_X86_PERF_REGS_H
// /*AFLA*/ 
// /*AFLA*/ enum perf_event_x86_regs {
// /*AFLA*/ 	PERF_REG_X86_AX,
// /*AFLA*/ 	PERF_REG_X86_BX,
// /*AFLA*/ 	PERF_REG_X86_CX,
// /*AFLA*/ 	PERF_REG_X86_DX,
// /*AFLA*/ 	PERF_REG_X86_SI,
// /*AFLA*/ 	PERF_REG_X86_DI,
// /*AFLA*/ 	PERF_REG_X86_BP,
// /*AFLA*/ 	PERF_REG_X86_SP,
// /*AFLA*/ 	PERF_REG_X86_IP,
// /*AFLA*/ 	PERF_REG_X86_FLAGS,
// /*AFLA*/ 	PERF_REG_X86_CS,
// /*AFLA*/ 	PERF_REG_X86_SS,
// /*AFLA*/ 	PERF_REG_X86_DS,
// /*AFLA*/ 	PERF_REG_X86_ES,
// /*AFLA*/ 	PERF_REG_X86_FS,
// /*AFLA*/ 	PERF_REG_X86_GS,
// /*AFLA*/ 	PERF_REG_X86_R8,
// /*AFLA*/ 	PERF_REG_X86_R9,
// /*AFLA*/ 	PERF_REG_X86_R10,
// /*AFLA*/ 	PERF_REG_X86_R11,
// /*AFLA*/ 	PERF_REG_X86_R12,
// /*AFLA*/ 	PERF_REG_X86_R13,
// /*AFLA*/ 	PERF_REG_X86_R14,
// /*AFLA*/ 	PERF_REG_X86_R15,
// /*AFLA*/ 
// /*AFLA*/ 	PERF_REG_X86_32_MAX = PERF_REG_X86_GS + 1,
// /*AFLA*/ 	PERF_REG_X86_64_MAX = PERF_REG_X86_R15 + 1,
// /*AFLA*/ };
// /*AFLA*/ #endif /* _ASM_X86_PERF_REGS_H */
