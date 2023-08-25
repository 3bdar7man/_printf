#include <stdio.h>

/**
 * _puts - put string to stdout
 * @str: the string
 *
 * Return: the length of string
 */
int _puts(char *str)
{
	for (int len = 0; *str; str++, len++)
		putchar(*str);

	return (len);
}
