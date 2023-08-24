#include "main.h"

/**
 *octal_recursive - converts decimal to octal
 *@num: The provided number
 *
 *Return: Nothing
 */
void octal_recursive(unsigned int num)
{
	char octal_char;

	if (num == 0)
	{
		return;
	}
	else
	{
		octal_recursive(num / 8);
		octal_char = (num % 8) + '0';
		write(1, &octal_char, 1);
	}
}
/**
 *print_octal_num - prints a number in the octal form
 *@num: The provided decimal number
 *
 *Return: Nothing
 */
void print_octal_num(unsigned int num)
{
	if (num == 0)
	{
		write(1, "0", 1);
	}
	else
	{
		octal_recursive(num);
	}
}
/**
 *count_octal_digits - Counts the octal number characters
 *@num: The decimal number
 *
 *Return: Nothing
 */
int count_octal_digits(unsigned int num)
{
	int counts = 0;

	if (num == 0)
		return (1);
	while (num != 0)
	{
		num /= 8;
		counts++;
	}
	return (counts);
}
