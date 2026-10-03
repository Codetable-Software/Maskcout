#include <stddef.h>
size_t mc_strlen(const char *s){ size_t n=0; while(s && s[n]) n++; return n; }
int mc_strcmp(const char *a,const char *b){ size_t i=0; if(!a||!b) return a==b?0:(a?1:-1); while(a[i]&&b[i]&&a[i]==b[i]) i++; return (unsigned char)a[i]-(unsigned char)b[i]; }
