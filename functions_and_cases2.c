#include "main.h"
/**
 * print_unsigned - function to print unsigned int
 * @numsu: list
 * Return: space
 */
int print_unsigned(va_list numsu)
{
	unsigned int n, n2, i = 0, dig_count = 0;
	char num[33], dig, aux[33];

	n = va_arg(numsu, unsigned int);
	n2 = n;
	do {
		dig = (n2 % 10) + '0';
		aux[i] = dig;
		i++;
		dig_count++;
		n2 = n2 / 10;
	} while (n2 != 0);
	i = 0;
	for (; i < dig_count; i++)
	{
		num[i] = aux[dig_count - i - 1];
		write(1, &num[i], 1);
	}
	return (dig_count);
}
/**
 * print_hexa - function to print hexadecimals
 * @numsh: list
 * Return: space
 */
int print_hexa(va_list numsh)
{
	int x;
	unsigned int n, n2, i = 0, dig_count = 0, numa[17] = {10, 11, 12, 13, 14, 15};
	char num[17], dig, aux[17] = {'a', 'b', 'c', 'd', 'e', 'f'};

	n = va_arg(numsh, unsigned int);
	n2 = n;
	do {
		dig = (n2 % 16) + '0';
		for (x = 0; numa[x] != '\0'; x++)
		{
			if ((n2 % 16) == numa[x])
				dig = aux[x];
		}
		aux[i] = dig;
		i++;
		dig_count++;
		n2 = n2 / 16;
	} while (n2 != 0);
	i = 0;
	for (; i < dig_count; i++)
	{
		num[i] = aux[dig_count - i - 1];
		write(1, &num[i], 1);
	}
	return (dig_count);
}
/**
 * print_HEXA - function to print HEXADECIMALS
 * @numsH: list
 * Return: space
 */
int print_HEXA(va_list numsH)
{
	int x;
	unsigned int n, n2, i = 0, dig_count = 0, numa[17] = {10, 11, 12, 13, 14, 15};
	char num[17], dig, aux[17] = {'A', 'B', 'C', 'D', 'E', 'F'};

	n = va_arg(numsH, unsigned int);
	n2 = n;
	do {
		dig = (n2 % 16) + '0';
		for (x = 0; numa[x] != '\0'; x++)
		{
			if ((n2 % 16) == numa[x])
				dig = aux[x];
		}
		aux[i] = dig;
		i++;
		dig_count++;
		n2 = n2 / 16;
	} while (n2 != 0);
	i = 0;
	for (; i < dig_count; i++)
	{
		num[i] = aux[dig_count - i - 1];
		write(1, &num[i], 1);
	}
	return (dig_count);
}
