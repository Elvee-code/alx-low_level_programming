#include <stdio.h>
#include "main.h"

/**
 *_puts - prints a string to stdout
 * @str: pointer to the string to print
 * Return: Always 0.
 */
void _puts(char *str)
{
int i = 0;
while (str[i])
{
putchar(str[i]);
i++;
}
putchar('\n');
}
