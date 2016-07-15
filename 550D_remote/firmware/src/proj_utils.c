
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
    DRV_USART0_WriteByte(c);    
    
/*    char printf_buffer[10];
    static short cnt = 0;
    
    if (c == '\0') {
        printf_buffer[cnt] = c;
        print_str(printf_buffer);
        cnt = 0;
    }
    printf_buffer[cnt]=c;
    cnt++;
  
 */
}