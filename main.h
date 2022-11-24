#ifndef HEADER_FILE_H
#define HEADER_FILE_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>

typedef struct tds
{
	char *type;
	int (*f)();
} tds_t;
int _printf(const char *format, ...);
int selec_funct(const char *format, tds_t *getfunct, va_list list);
int print_char(va_list ch);
int print_string(va_list str);
int print_number(va_list nums);
int print_binary(va_list totals);

#endif
