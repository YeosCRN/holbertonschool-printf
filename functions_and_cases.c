#include "main.h"
/**
 * print_char - funtion to print a character
 * @ch: list
 * Return: space
 */

int print_char(va_list ch)
{
	char c;

	c = va_arg(ch, int);

	write(1, &c, 1);
	return (1);
}

/**
 * print_string - function to print strings
 * @str: list
 * Return: space
 */

int print_string(va_list str)
{
	int j = 0;
	char *s;

	s = va_arg(str, char *);

	if (s == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}

	while (s[j] != '\0')
		j++;
	write(1, s, j);
	return (j);
}
/**
 * print_number - function to print numbers
 * @totals: list
 * Return: space
 */
int print_number(va_list totals)
{
	int n = va_arg(totals, int), n2 = n, n3 = n, j = 0, i = 0, dig_count = 0;
	char num[] = "12345678910", dig;

	if (n == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	while (n2 != 0)
	{
		dig_count++;
		n2 = n2 / 10;
	}
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	if (n < 0)
	{
		n3 = n * -1;
		for (; j < dig_count; j++)
		{
			dig = '0' + (n3 % 10);
			num[dig_count - j - 1] = dig;
			n3 = n3 / 10;
		}
		write(1, "-", 1);
		write(1, &num[0], dig_count);
		return (dig_count + 1);
	}
	n2 = n;
	for (; i < dig_count; i++)
	{
		dig = '0' + (n2 % 10);
		num[dig_count - i - 1] = dig;
		n2 = n2 / 10;
	}
	write(1, &num[0], dig_count);
	return (dig_count);
}
/**
 * print_binary - function to print binary numbers
 * @nums: list
 * Return: space
 */
int print_binary(va_list nums)
{
	unsigned int n, n2, i = 0, dig_count = 0;
	char num[33], dig, aux[33];

	n = va_arg(nums, unsigned int);
	n2 = n;
	do {
		dig = (n2 % 2) + '0';
		aux[i] = dig;
		i++;
		dig_count++;
		n2 = n2 / 2;
	} while (n2 != 0);
	i = 0;
	for (; i < dig_count; i++)
	{
		num[i] = aux[dig_count - i - 1];
		write(1, &num[i], 1);
	}
	return (dig_count);
}
