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

	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ')
		return (-1);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '%')
			{
				write(1, format, 1);
				char_count++;
			}
			else if (*format == 's')
			{
				char *str = va_arg(args, char*);
				int len = 0;

				if (str == NULL)
					str = "(null)";
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
			else if (*format == 'b')
			{
				unsigned int num = va_arg(args, unsigned int);

				printer_ui_bin(num);
				char_count += count_bin(num);
			}
			else if (*format == 'd' || *format == 'i')
			{
				int num = va_arg(args, int);

				printer_dec_int(num);
				char_count += count_digits(num);
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
/**
 *print_ui_bin_rec - prints binary recursively
 *@num: provided number
 *
 *Return: nothing
 */
void print_ui_bin_rec(unsigned int num)
{
	char bin;

	if (num > 0)
	{
		print_ui_bin_rec(num / 2);
		bin = (num % 2) + '0';
		write(1, &bin, 1);
	}
}

/**
 *printer_ui_bin - prints the int in decimal
 *@num: the integer
 *
 *return: Nothin
 */
void printer_ui_bin(unsigned int num)
{
	if (num == 0)
	{
		write(1, "0", 1);
	}
	else
		print_ui_bin_rec(num);
}
/**
 *count_bin - counts the length of the binary number
 *@num: recieves ui
 *
 *Return: counts
 */
int count_bin(unsigned int num)
{
	int c = 0;

	if (num == 0)
		return (1);
	while (num > 0)
	{
		num /= 2;
		c++;
	}
	return (c);
}
