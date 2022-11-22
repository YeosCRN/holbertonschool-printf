#include "main.h"
/**
 * print_op - function selector
 * @format: punter with the format
 * @print_arr: array printer
 * @list: list
 * Return: int number
 */
int print_op(const char *format, tds_t *print_arr, va_list list)
{
	char x;
	int count = 0, y = 0, z = 0;

	x = format[y];
	while (x != '\0')
	{
		if (x == '%')
		{
			z = 0;
			y++;
			x = format[y];
			while (print_arr[z].type != NULL &&
				   x != *(print_arr[z].type))
				z++;
			if (print_arr[z].type != NULL)
				count = count + print_arr[z].f(list);
			else
			{
				if (x == '\0')
					return (-1);
				if (x != '%')
					count += write(1, "%", 1);
				count += write(1, &x, 1);
			}
		}
		else
			count += write(1, &x, 1);
		y++;
		x = format[y];
	}
	return (count);
}
