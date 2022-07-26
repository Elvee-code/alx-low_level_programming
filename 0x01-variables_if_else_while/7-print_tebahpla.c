#include <stdio.h>

/**
 * main - prints the alphabets in reverse
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	/*code goes here*/
	for (c = 'z'; c >= 'a'; c--)
		putchar(c);
	putchar('\n');
	return (0);
}
