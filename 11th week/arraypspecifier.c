#include <stdio.h>

int main(void)
{
	int rArr[3] = { 0, 1, 2 };

	printf("%p\n", &rArr[0]);

	printf("%p\n", &rArr[1]);

	printf("%p\n", &rArr[2]);

	return 0;
}