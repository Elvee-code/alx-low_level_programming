#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _strcat - concatenates two strings
 * @dest: string to append to
 * @src: string to add
 *
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
int i, j;
i = 0;
j = 0;

while (dest[i] != '\0')
i++;
while (src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}
