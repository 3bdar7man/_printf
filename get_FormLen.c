#include <stdarg.h>

/**
 * get_FormLen - calculate length of formated string
 * @format: the string
 * @apP: va_list variable pointer of formated args
 *
 * Return: the length
 */
int get_FormLen(const char *format, va_list *apP)
{
	int i, len;
	char *str;

	if (!format && !format[i])
		return (0);

	for (i = 0, len = 0; format && format[i]; i++)
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 's')
				while(*str)
				{
					str++;
					len++;
				}
			else
				len++;
		}
		else
		{
			len++;
		}
	}
	return (len);
}
