#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Created by Elvee-code
 */

void times_table(void)
{
	int ii, tT, mul;

	for (ii = 0; ii <= 9; ii++)
	{
		for (tT = 0; tT <= 9; tT++)
		{
			mul = ii * tT;
			if (tT == 0)
				_putchar('0' + mul);
			else if (mul < 10)
			{
				_putchar(' ');
				_putchar('0' + mul);
			}
			else
			{
				_putchar('0' + (mul / 10));
				_putchar('0' + (mul % 10));
			}
			if (tT < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
