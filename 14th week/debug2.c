#include <stdio.h>

int main(void)
{
	char src[20] = "Hello, world!";
	char tar[20];

	char* p = src;
	char* q = tar;

	while ((*q = *p) != '\0')
	{
		q++;
		p++;
	}
	return 0;
}