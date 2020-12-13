#include <stdio.h>

int main(void)
{
	int i;
	while (1)
	{
		printf("Input 10-base integar i:");

		scanf("%d", &i);
		printf("i is 0x%08x.\n", i);
	}
	return 0;
}