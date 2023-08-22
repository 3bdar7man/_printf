#include "printfp.h"
/**
 * _printf - produces output format as an original printf
 *
 * @format: this is a counter to character string containing format specifiers
 *
 * Return: length
 */
int _printf(const char *format, ...)
{
	int i, len;
	i = 0;
	len = 0;
	va_list argslist;

	va_start(argslist, format);

	char *s = va_arg(argslist, char *);
	char c = va_arg(argslist, char);

	while (format && format[i])
	{
		if (format[i] == '%')
		{
			i++;

			if (format[i] == 'c')
			{
				putchar(c);
				len++;
			}
			else if  (format[i] == 's')
			{
				while (*s)
				{
					len++;
					*s++;
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
	return(len);
}
