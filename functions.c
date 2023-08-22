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

	if (num == 0)
		return (1);
	while ( num != 0)
	{
		num /= 10;
		count++;
	}
	return (count);
}
