
#if _PSP_FW_VERSION == 639	
#if PSP_MODEL == 0
#define REBOOTEX_ADDR_PATCH	0xCD98
#define SYSCON_DWORD_ADDR	0x04006338

#elif PSP_MODEL == 1
#define REBOOTEX_ADDR_PATCH	0xDA98
#define SEEDKEY_PATCH_ADDR	0x1168
#define SEEDKEY_RETURN_ADDR	0x11EC
#define SYSCON_DWORD_ADDR	0x04007024

#endif

#elif _PSP_FW_VERSION == 660	
#if PSP_MODEL == 0
#define REBOOTEX_ADDR_PATCH	0xCF18
#define SYSCON_DWORD_ADDR	0x04006440

#elif PSP_MODEL == 1
#define REBOOTEX_ADDR_PATCH	0xDC98
#define SEEDKEY_PATCH_ADDR	0x1170
#define SEEDKEY_RETURN_ADDR	0x11F4
#define SYSCON_DWORD_ADDR	0x0400714C;

#endif

#elif _PSP_FW_VERSION == 661	
#if PSP_MODEL == 0
#define REBOOTEX_ADDR_PATCH	0xCF18
#define SYSCON_DWORD_ADDR	0x04006440

#elif PSP_MODEL == 1
#define REBOOTEX_ADDR_PATCH	0xDC98
#define SEEDKEY_PATCH_ADDR	0x1170
#define SEEDKEY_RETURN_ADDR	0x11F4
#define SYSCON_DWORD_ADDR	0x0400714C;

#endif

#else
#error patch.h
#endif