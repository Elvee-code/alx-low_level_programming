#include <stdio.h>
/**
 * main -prints all single digit numbers of base 10 starting from 0
 *
 * Return: Alway 0 (Success)
 */
int main(void)
{
	int n;
	/*conde starts from here*/
	for (n = '0'; n <= '9'; n++)
		putchar(n);
	putchar('\n');

	return (0);
}
