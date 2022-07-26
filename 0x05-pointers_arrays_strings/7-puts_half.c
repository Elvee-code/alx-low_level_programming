#include <stdio.h>
#include "main.h"

/**
 * puts_half - prints half of a string
 * followed by a new line
 * @str: string to be printed
 * Return: Always 0.
 */
void puts_half(char *str)
{
int i = 0, n;

while (i >= 0)
{
if (str[i] == '\0')
break;
i++;
}
if (i % 2 == 1)
n = i / 2;
else
n = (i - 1) / 2;
for (n++; n < i; n++)
putchar(str[n]);
putchar('\n');
}
