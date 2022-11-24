#include "main.h"
/**
 * selec_funct - function selector
 * @format: pointer with the format
 * @getfunct: get right funct
 * @list: list
 * Return: count
 */
int selec_funct(const char *format, tds_t *getfunct, va_list list)
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
			while (getfunct[z].type != NULL &&
				   x != *(getfunct[z].type))
				z++;
			if (getfunct[z].type != NULL)
				count = count + getfunct[z].f(list);
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
