#include <stdio.h>

/**
 * main - prints all the numbersof base 16 in lowercasr
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	/*code starts from here*/
	for (c = '0'; c <= '9'; c++)
		putchar(c);
	for (c = 'a'; c <= 'f'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
