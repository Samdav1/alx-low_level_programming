#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
<<<<<<< HEAD
 * main - determines if the value of the random number
 * * generated is positive, zero or negative
 *
 * Return: returns zero ar the end
 */

/* betty style doc for function main goes there */
=======
 * main - determines if the value of the random number ** generated is positive, zero or negative
 *
 * Return: returns zero at the end 
 */ 

/* betty style doc for function main goes here */
>>>>>>> 6b1065e5eea1cf8edb75fb9824e77275ccfe4da7
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
<<<<<<< HEAD
	else
=======
	else 
>>>>>>> 6b1065e5eea1cf8edb75fb9824e77275ccfe4da7
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
