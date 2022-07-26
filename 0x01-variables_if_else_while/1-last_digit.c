#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main -prints the last digit of the stored numbers in the variables
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, ld;
	/*code goes here*/
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = n % 10;

	if (ld > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, ld);
	}
	else if (ld == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, ld);
	}
	else if (ld < 6 && ld != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ld);
	}
	return (0);
}
