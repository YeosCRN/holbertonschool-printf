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
int print_op(const char *format, tds_t *print_arr, va_list cases);
int print_char(va_list ch);
int print_string(va_list str);
int print_number(va_list nums);

#endif
