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
	int char_count = 0;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == 's')
			{
				char *str = va_arg(args, char*);
				int len = 0;

				while (str[len] != '\0')
					len++;
				write(1, str, len);
				char_count += len;
			}
			else if (*format == 'c')
			{
				char c = va_arg(args, int);

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
	char n = '\0';
	write(1, &n, 1);
	va_end(args);
	return (char_count);
}
