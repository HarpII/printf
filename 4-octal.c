#include "main.h"

/**
 * print_o - Convert of decimals to octal
 * @ar_list: Store the argumen values
 * Return: The count
 */

int print_o(va_list ar_list)
{
	unsigned int i, count, Num, octal, arr[11];

	i = 0, count = 0;
	Num = va_arg(ar_list, int);

	if (Num < 1)
	{
		_putchar(48);
		count++;
		return (count);
	}
	else
	{
		while (Num > 0)
		{
			octal = Num % 8;
			Num /= 8;
			arr[count] = octal;
			count++;
		}
		i = count - 1;
		while (i > 0)
		{
			_putchar('0' + arr[i]);
			i--;
		}
		_putchar('0' + arr[i]);
	}
	return (count);
}


