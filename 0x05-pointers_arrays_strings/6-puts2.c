#include <stdio.h>
#include "main.h"

/**
 * * puts2 - prints one char out of 2 of a string
 * followed by a new line
 * @str: string to print the chars from
 * Return: Always 0.
 */
void puts2(char *str)
{
int i = 0;
while (i >= 0)
{
if (str[i] == '\0')
{
putchar('\n');
break;
}
if (i % 2 == 0)
putchar(str[i]);
i++;
}
}
