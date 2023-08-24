#include "main.h"

/**
 *print_unsigned_dec_rec - prints an unsigned decimal int
 *@num: The number provided
 *
 *Return: nothing
 */
void print_unsigned_dec_rec(unsigned int num)
{
	char digit;

	if (num == 0)
	{
		return;
	}
	print_unsigned_dec_rec(num / 10);
	digit = (num % 10) + '0';
	write(1, &digit, 1);
}
/**
 *print_unsigned_dec - prints the decimal numbers
 *@num: The provided value
 *
 *Return: Nothing
 */
void print_unsigned_dec(unsigned int num)
{
	if (num == 0)
	{
		write(1, "0", 1);
	}
	else
	{
		print_unsigned_dec_rec(num);
	}
}
/**
 *count_unsigned_dec - counts the characters
 *@num: The provided number
 *
 *Return: Number of characters
 */
int count_unsigned_dec(unsigned int num)
{
	int count = 0;

	if (num == 0)
		return (1);
	while (num != 0)
	{
		num /= 10;
		count++;
	}
	return (count);
}
