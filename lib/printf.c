#include <stdint.h>
#include <stddef.h>
typedef void (*mc_putc_fn)(char, void*);
static void emit_u64(mc_putc_fn putc, void *ctx, uint64_t v, unsigned base){ char b[32]; size_t n=0; const char *d="0123456789abcdef"; if(v==0){putc('0',ctx);return;} while(v){b[n++]=d[v%base];v/=base;} while(n) putc(b[--n],ctx); }
void mc_vprintf(mc_putc_fn putc, void *ctx, const char *fmt, __builtin_va_list ap){ while(*fmt){ if(*fmt!='%'){putc(*fmt++,ctx);continue;} fmt++; if(*fmt=='s'){const char *s=__builtin_va_arg(ap,const char*); while(s&&*s) putc(*s++,ctx);} else if(*fmt=='x'){emit_u64(putc,ctx,__builtin_va_arg(ap,uint64_t),16);} else if(*fmt=='u'){emit_u64(putc,ctx,__builtin_va_arg(ap,uint64_t),10);} else if(*fmt=='c'){putc((char)__builtin_va_arg(ap,int),ctx);} else {putc('%',ctx);putc(*fmt,ctx);} fmt++; } }
