/* 
 * File:   proj_utils.h
 * Author: Michael
 *
 * Created on 14 July 2016, 21:21
 */

#ifndef PROJ_UTILS_H
#define	PROJ_UTILS_H


#ifdef	__cplusplus
extern "C" {
#endif




#ifdef	__cplusplus
}
#endif


void print_str(char *s);
void my_putc(char c);

char printf_buffer[20];

    #define PRINT_STRING(a) print_str(a)


#endif	/* PROJ_UTILS_H */

