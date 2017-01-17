// /*AFLA*/ /* Automatically generated by kernel/time/timeconst.bc */
// /*AFLA*/ /* Time conversion constants for HZ == 250 */
// /*AFLA*/ 
// /*AFLA*/ #ifndef KERNEL_TIMECONST_H
// /*AFLA*/ #define KERNEL_TIMECONST_H
// /*AFLA*/ 
// /*AFLA*/ #include <linux/param.h>
// /*AFLA*/ #include <linux/types.h>
// /*AFLA*/ 
// /*AFLA*/ #if HZ != 250
// /*AFLA*/ #error "include/generated/timeconst.h has the wrong HZ value!"
// /*AFLA*/ #endif
// /*AFLA*/ 
// /*AFLA*/ #define HZ_TO_MSEC_MUL32	U64_C(0x80000000)
// /*AFLA*/ #define HZ_TO_MSEC_ADJ32	U64_C(0x0)
// /*AFLA*/ #define HZ_TO_MSEC_SHR32	29
// /*AFLA*/ #define MSEC_TO_HZ_MUL32	U64_C(0x80000000)
// /*AFLA*/ #define MSEC_TO_HZ_ADJ32	U64_C(0x180000000)
// /*AFLA*/ #define MSEC_TO_HZ_SHR32	33
// /*AFLA*/ #define HZ_TO_MSEC_NUM		4
// /*AFLA*/ #define HZ_TO_MSEC_DEN		1
// /*AFLA*/ #define MSEC_TO_HZ_NUM		1
// /*AFLA*/ #define MSEC_TO_HZ_DEN		4
// /*AFLA*/ 
// /*AFLA*/ #define HZ_TO_USEC_MUL32	U64_C(0xFA000000)
// /*AFLA*/ #define HZ_TO_USEC_ADJ32	U64_C(0x0)
// /*AFLA*/ #define HZ_TO_USEC_SHR32	20
// /*AFLA*/ #define USEC_TO_HZ_MUL32	U64_C(0x83126E98)
// /*AFLA*/ #define USEC_TO_HZ_ADJ32	U64_C(0x7FF7CED9168)
// /*AFLA*/ #define USEC_TO_HZ_SHR32	43
// /*AFLA*/ #define HZ_TO_USEC_NUM		4000
// /*AFLA*/ #define HZ_TO_USEC_DEN		1
// /*AFLA*/ #define USEC_TO_HZ_NUM		1
// /*AFLA*/ #define USEC_TO_HZ_DEN		4000
// /*AFLA*/ 
// /*AFLA*/ #endif /* KERNEL_TIMECONST_H */