#include "main.h"

/**
 *printer_dec_int - prints the number
 *@num: the number to print
 *
 *Return: Nothing
 */
void printer_dec_int(int num)
{
	int digits[10];/*max digits in an int*/
	int index = 0;
	int i;

	if (num == 0)
	{
		write(1, "0", 1);
	}
	else
	{
		if (num < 0)
		{
			write(1, "-", 1);
			num = -num;
		}
		while (num > 0)
		{
			digits[index] = num % 10 + '0';
			index++;
			num /= 10;
		}
		for (i = index; i >= 0; i--)
		{
			write(1, &digits[i], 1);
		}
	}
}
/**
 *count_digits - returns the number of digits
 *@num: Accepted vallue
 *
 *Return: counts
 */
int count_digits(int num)
{
	int count = 0;
	int temp_num;

	temp_num = num;
	if (num == 0)
		return (1);
	while (num != 0)
	{
		num /= 10;
		count++;
	}
	if (temp_num < 0)
		return (count + 1);
	return (count);
}
/**
 *is_digit - checks if a chracter is a number
 *@c: The character to be checked
 *
 *Return: true or false
 *
 *bool is_digit(char c)
 *
 *
 *	if (c >= '0' && c <= '9')
 *	return (true);
 *	return (false);
 *
 *
 *
 *is_number - checks if a given data are numbers
 *@num: The given value
 *
 *return: true or false
 *
 *bool is_number(
 */
