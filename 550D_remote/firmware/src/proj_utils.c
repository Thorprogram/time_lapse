
#include"proj_utils.h"






void print_str(char *s) 
{
    
    while(*s != '\0') {
        DRV_USART0_WriteByte(*s);
        s++;
     }
    
}

void _mon_putc(char c)
{
     my_putc(c);
}

void my_putc(char c)
{
    static short cnt = 0;
    
    printf_buffer[cnt]=c;
    cnt++;
    if (c == '\0') {
        cnt=0;
    }
}