#include "main.h"
/**
 * _printf - produces output format as an original printf
 *
 * @format: this is a counter to character string containing format specifiers
 *
 * Return: length
 */
int _printf(const char *format, ...)
{
	int i = 0;
	int len = 0;
	va_list argslist;
	char *str;
	char c;

	va_start(argslist, format);

	while (format && format[i])
	{
		if (format[i] == '%')
		{
			i++;

			if (format[i] == 'c')
			{
				c = va_arg(argslist, int);
				putchar(c);
				len++;
			}
			else if  (format[i] == 's')
			{
				str = va_arg(argslist, char *);
				while (*str)
				{
					putchar(*str++);
					len++;
				}
			}
			else if (format[i] == '%')
			{
				putchar('%');
				len++;
			}
			else
			{
				putchar(format[i]);
				len++;
			}
		}
		i++;
	}
	va_end(argslist);
	return (len);
}
