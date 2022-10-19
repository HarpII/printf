#include "main.h"

/**
 * print hex - prints a number in
 * hexadecimal form.
 * @num: number to print.
 * @c: determine if to print in uppercase
 * or lowercase (0 for lowercase, 1 for uppercase)
 *
 * Return: number of digits printed
 */
int print_hex(unsigned int num, unsigned int c)
{
	unsigned int hex, arr[8];
	char diff;
	int count, i;

	i = 0, count = 0;

	if (c)
	{
		diff = 'A' - ':';
	}
	else
	{
		diff = 'a' - ':';
	}

	while (num > 0)
	{
		hex = num % 16;
		num/= 16;
		arr[count] = hex;
		count++;
	}
	i = count - 1;
	if (num == 0)
	{
		_putchar('0' + num);
		count++;
	}

	while (i >= 0)
	{
		if (arr[i] >= 10)
		{
			_putchar('0' + diff + arr[i]);
		}
		else
		{
			_putchar('0' + arr[i]);
		}
		i--;
	}
	/*_putchar('0' + arr[i]);*/
	return (count);
}

/**
 * print_x - prints in lowercase hexadecimals
 * @ar_list: list to print
 *
 * Return: number of digits printed
 */
int print_x(va_list ar_list)
{
	return (print_hex(va_arg(ar_list, unsigned int), 0));
}

/**
 * print_x - prints in uppercase hexadecimals
 * @ar_list: list to print
 *
 * Return: number of digits printed
 */
int print_X(va_list ar_list)
{
	return (print_hex(va_arg(ar_list, unsigned int), 1));
}
