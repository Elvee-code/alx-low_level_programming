#include "main.h"

/**
 * main - this program prints _putchar
 *
 * Return: Always 0 (Success)
 *
 * created by Elvee-code
 */

int main(void)
{
	char var[] = "_putchar";
	int ii;
	/*array var length*/
	int lenVar = sizeof(var) / sizeof(var[0]);
	/*conditional loop*/
	for (ii = 0; ii < lenVar - 1; ii++)
	{
		_putchar(var[ii]);
	}
	_putchar('\n');

	return (0);
}
