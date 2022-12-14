#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    unsigned long int l;
    void *addr;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    l = UINT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned:[%u]\n", l);
    printf("Unsigned:[%u]\n", l);
    _printf("Unsigned binary:[%b]\n", len);
    printf("Unsigned binary:[%b]\n", len);
    len = _printf("Unsigned octal:[%o]\n", ui);
    len2 = printf("Unsigned octal:[%o]\n", ui);
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", 0, 0);
    printf("Unsigned hexadecimal:[%x, %X]\n", 0, 0);
    len = _printf("[%x]\n", 10);
    len2 = printf("[%X]\n", 0);
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    _printf("Address:[%x]\n", addr);
    printf("Address:[%lx]\n", addr);
    _printf("Percent:[%%]\n");
    printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");
    _printf("String:[%S]\n", "\n");
    _printf("String:[%S]\n", "\x01\x02\x03\x04\x05\x06\x07\x1F\x7F");
    return (0);
}
