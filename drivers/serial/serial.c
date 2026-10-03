#include "serial.h"
#if defined(__x86_64__)
static inline void outb(unsigned short p,unsigned char v){__asm__ volatile("outb %0,%1"::"a"(v),"Nd"(p));}
void serial_init(void){outb(0x3f8+1,0);outb(0x3f8+3,0x80);outb(0x3f8+0,3);outb(0x3f8+1,0);outb(0x3f8+3,3);outb(0x3f8+2,0xc7);outb(0x3f8+4,0x0b);}void serial_putc(char c){while(!((*(volatile unsigned char*)0x3fd)&0x20)){}outb(0x3f8,(unsigned char)c);}
#else
void serial_init(void){} void serial_putc(char c){(void)c;}
#endif
