#include "main.h"

/**
 * print_p - prints a addresses in
 * hexadecimal form.
 * @num: number to print.
 *
 * Return: number of digits printed
 */
int print_p(va_list ar_list)
{
	unsigned int arr[16];
	unsigned long max, num;
	char *s = "(nil)";
	int count = 0, i = 0, c = 0;

	num = va_arg(ar_list, unsigned long);

	if (num == 0)
	{
		for ( i = 0; s[i]; i++)
		{
			_putchar(s[i]);
			count++;
		}
		return (count);
	}

	_putchar('0');
	_putchar('x');
	count = 2;
	max = 1152921504606846976;
	arr[0] = num / max;
	for (i = 1; i < 16; i++)
	{
		max /= 16;
		arr[i] = (num / max) % 16;
	}

	for (i = 0, c = 0; i < 16; i++)
	{
		c += arr[i];
		if (c || i == 15)
		{
			if (arr[i] >= 10)
				_putchar('0' + ('a' - ':') + arr[i]);
			else
				_putchar('0' + arr[i]);
			count++;
		}
	}
	return (count);
}
