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
	if (!format && !format[i])
		return (0);

	for (; format && format[i]; i++)
	{
		if (format[i] == '%')
		{
			i++;

			if (format[i] == 'c')
				len += (putchar(c = va_arg(argslist, int)), 1);
			else if  (format[i] == 's')
				for (str = va_arg(argslist, char *); *str; str++, len++)
					putchar(*str);
			else if (format[i] == '%')
				len += (putchar('%'), 1);
			else
				putchar(format[i]), len++;
		}
		else
		putchar(format[i]), len++;
	}
	va_end(argslist);
	return (len);
}
