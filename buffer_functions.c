#include "main.h"

/**
 * create_buffer - create a buffer to store the
 * format string to be printed
 * Return: pointer to buffer 
 */
char *create_buffer(void)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		return (NULL);
	}

	return (buffer);
}

/**
 * write_buffer - prints buffer contents
 * to stdout.
 * @buffer: buffer to print
 * @len: lenght of string in buffer
 * @list: va_list
 */
void write_buffer(char *buffer, int len, va_list ar_list)
{
	char *buff;

	buff = realloc(buffer, len);
	write(1, buff, len);

	free(buff);
	va_end(ar_list);
}
