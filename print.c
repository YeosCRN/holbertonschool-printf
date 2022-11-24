#include "main.h"
/**
 * _printf - printer
 * @format: formats
 * Return: formatted
 */

int _printf(const char *format, ...)
{
	va_list list;
	int redic = 0;

	tds_t cases[] = {
		{"c", print_char},
		{"s", print_string},
		{"d", print_number},
		{"i", print_number},
		{"b", print_binary},
		{NULL, NULL}};

	if (format == NULL)
		return (-1);
	va_start(list, format);
	redic = print_op(format, cases, list);
	va_end(list);
	return (redic);
}
