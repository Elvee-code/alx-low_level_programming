#include <stdio.h>
/**
 * main - print the alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	/*code goes here*/
	for (c = 'a'; c <= 'z'; c++)
		if (c != 'e' && c != 'q')
			putchar(c);
	putchar('\n');
	return (0);
}
