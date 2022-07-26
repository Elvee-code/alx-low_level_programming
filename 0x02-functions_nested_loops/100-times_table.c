#include "main.h"

/**
 * print - function to print recursively using _putchar
 * @var: variable to be printed
 */
void print(int var)
{
	if (var / 10)
		print(var / 10);
	_putchar('0' + (var % 10));
}
/**
 * print_times_table - prints the n times table, starting with 0
 * @n: time table to print
 *
 * Created by Elvee-code
 *
 */

void print_times_table(int n)
{
	int ii, tT, mul;

	if (n < 0 || n > 15)
		return;
	for (ii = 0; ii <= n; ii++)
	{
		for (tT = 0; tT <= n; tT++)
		{
			mul = ii * tT;
			if (tT == 0)
				_putchar('0' + mul);
			else if (mul < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + mul);
			}
			else if (mul < 100)
			{
				_putchar(' ');
				print(mul);
			}
			else
			{
				print(mul);
			}
			if (tT < n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
