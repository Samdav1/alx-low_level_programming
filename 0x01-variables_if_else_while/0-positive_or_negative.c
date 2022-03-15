#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes here */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		print("%d is positive\n");
	{
	else id (n==0)
		printf("%d is zero\n", n);
	}
	else 
	{
		printf("%d is negative\n", n)
	}
	return (0);

