#include "main.h"

/**
 * print_c - Print characters (%c)
 * @ar_list: Store the a list of characters.
 * Return: num of parameters printed
 */
int print_c(va_list ar_list)
{
	int count = 0;
	int c;

	c = va_arg(ar_list, int);
	count += _putchar(c);
	return (count);
}

/**
* print_s - print string (%s)
* @ar_list: Store the a list of characters
* Return: num of parameters printed
*/
int print_s(va_list ar_list)
{
	int i, count = 0;
	char *str;

	str = va_arg(ar_list, char *);
	if (str == NULL)
		str = "(null)";

	for (i = 0; str[i]; i++)
		count += _putchar(str[i]);

	return (count);
}

/**
* print_S - print string (%S)
* @ar_list: Store the a list of characters
* Return: num of characters printed
*/
int print_S(va_list ar_list)
{
	int i, count = 0;
	unsigned int c = 0;
	char *str;

	str = va_arg(ar_list, char *);
	if (str == NULL)
		str = "(null)";

	for (i = 0; str[i]; i++)
	{
		c = str[i];
		if (c < 32 || c >= 127)
		{
			_putchar('\\');
			_putchar('x');
			_putchar('0');
			print_hex(c, 1);
		}
		count += _putchar(str[i]);
	}
	return (count);
}
