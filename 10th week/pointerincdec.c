#include <stdio.h>

int main(void)
{
	int x = 0;
	int* pi1, * pi2;

	pi = &x;
	pi2 = pi1;

	printf("x, *pi1, *pi2 is %d %d %d.\n", x, *pi1, *pi2);

	++ * pi1;
	-- * pi2;


	printf("x, *pi1, *pi2 is %d %d %d.\n", x, *pi1, *pi2);
}