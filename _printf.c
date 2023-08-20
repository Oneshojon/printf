#include "main.h"

/**
 *_printf - produces output according to a format
 *@format: The specified format
 *
 *Return: The number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i;
	char c;
	char *s;
	int char_count = 0;
	int len = 0;

	va_start(args, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format == '\0')
				break;
			if (*format == 's')
			{
				s = va_arg(args, char*);
				while (*s)
				{
					len++;
					s++;
				}
				write(1, s, len);
				char_count+= len;
			}
			else if (*format == 'c')
			{
				c = va_arg(args, int);
				write(1, &c, 1);
				char_count++;
			}
			else if (*format == '%')
			{
				write(1, format, 1);
				char_count++;
			}
		}
		else
		{
			write(1, format, 1);
			char_count++;
		}
		format++;
	}
	va_end(args);
	return (char_count);
}
