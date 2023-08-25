#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * _printf - produces output format as an original printf
 * @format: this is a counter to character string containing format specifiers
 *
 * Return: length
 */
int _printf(const char *format, ...)
{
	int i, len = 0;
	va_list argslist, *apP;
	char c, *str;

	va_copy(argslist, *apP);
	va_start(argslist, format);
	va_start(*apP, format);
	if (!format && !format[i])
		return (0);

	for (i = 0; format && format[i]; i++)
	{
		if (format[i] == '%')
		{
			i++;

			if (format[i] == 'c')
				putchar(c = va_arg(argslist, int));
			else if  (format[i] == 's')
				_puts(str = va_arg(argslist, char *);
			else if (format[i] == '%')
				putchar('%');
			else
				putchar(format[i]);
		}
		else
		putchar(format[i]);
	}
	len  = get_FormLen(format, apP);
	va_end(*apP);
	va_end(argslist);
	return (len);
}
