#include <maskcout/types.h>
void *mc_memcpy(void *dst, const void *src, size_t n){ unsigned char *d=dst; const unsigned char *s=src; for(size_t i=0;i<n;i++) d[i]=s[i]; return dst; }
void *mc_memset(void *dst, int v, size_t n){ unsigned char *d=dst; for(size_t i=0;i<n;i++) d[i]=(unsigned char)v; return dst; }
int mc_memcmp(const void *a,const void *b,size_t n){ const unsigned char *x=a,*y=b; for(size_t i=0;i<n;i++) if(x[i]!=y[i]) return x[i]<y[i]?-1:1; return 0; }
