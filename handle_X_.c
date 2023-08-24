#include "main.h"

/**
 *X_recursion - prints a decimal in hexadecimal
 *@num: Decimal number provided
 *
 *Return: Nothing
 */
void X_recursion(int num)
{
	int hex;

	if (num == 0)
		return;
	X_recursion(num / 16);
	hex = num % 16;
	if (hex < 10)
		hex = hex + '0';
	hex = (hex - 10) + 'A';
	write(1, &hex, 1);
}
/**
 *print_X - prints numbers in hexadecimal
 *@num: The provided number
 *
 *Return: Nothing
 */
void print_X(int num)
{
	if (num == 0)
		return;
	X_recursion(num);
}
/**
 *count_X - return the number of hex digits
 *@num: The given number in dec
 *
 *Return: counts
 */
int count_X(int num)
{
	int counts = 0;

	if (num == 0)
		return (1);
	while (num != 0)
	{
		num /= 16;
		counts++;
	}
	return (counts);
}
