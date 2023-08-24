#include "main.h"

/**
 *x_recursion - prints a decimal in hexadecimal
 *@num: Decimal number provided
 *
 *Return: Nothing
 */
void x_recursion(int num)
{
	int hex;

	if (num == 0)
		return;
	x_recursion(num / 16);
	hex = num % 16;
	if (hex < 10)
		hex = hex + '0';
	else
		hex = (hex - 10) + 'a';
	write(1, &hex, 1);
}
/**
 *print_x - prints numbers in hexadecimal
 *@num: The provided number
 *
 *Return: Nothing
 */
void print_x(int num)
{
	if (num == 0)
		return;
	x_recursion(num);
}
/**
 *count_x - return the number of hex digits
 *@num: The given number in dec
 *
 *Return: counts
 */
int count_x(int num)
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
