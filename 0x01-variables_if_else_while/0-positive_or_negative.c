#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - checks whether a number is positive or negative
 *
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
		printf("%u is positive\n");
	else if (n == 0)
		printf("%u is zero\n");
	else
		printf("%u is negative\n");
	return (0);
}
