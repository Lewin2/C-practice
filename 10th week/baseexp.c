#include <stdio.h>

int power(int*, int*);

int main(void)
{
	int base = 5, exp = 3;

	printf("The %dth power if %d is %d.\n", exp, base, power(&base, &exp));
	return 0;
}

int power(int* b, int* e)
{
	int i, resurt = 1;

	for (i = 1; i <= *e; i++)
	{
		resurt *= *b;
	}

	return resurt;
}