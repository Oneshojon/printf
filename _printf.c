#include "main.h"
/**
 *print_string - prints strings and return the count
 *@str: pointer to the string
 *
 *Return: pointer to the string
 */
void print_string(char *str)
{
	int len = 0;

	while (*str)
	{
		len++;
	}
	write(1, str, len);
}
/**
 *count_string - counts the number of character in a string
 *@s: pointer to the string
 *
 *Return: counts
 */
int count_string(char *s)
{
	int count = 0;

	while (*s)
	{
		count++;
		s++;
	}
	return (count);
}

/**
 *_printf - produces output according to a format
 *@format: The specified format
 *
 *Return: The number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int char_count;
	char c;
	

	va_start(args, format);
	while (*format != '\0')
	{
		char_count = 0;
		if (*format == '%')
		{
			format++;
			if (*format == '\0')
				break;
			if (*format == 's')
			{
				print_string(va_arg(args, char*));
				char_count += count_string(va_arg(args, char*));
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
