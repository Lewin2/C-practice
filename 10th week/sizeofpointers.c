#include <stdio.h>

int main(void)
{
	char c;
	int i;
	long l;
	float f;
	double d;

	char* pc = &c;
	int* pi = &i;
	long* pl = &l;
	float* pf = &f;
	double* pd = &d;

	printf("sizeif(c): %d, sizeof(pc): %d\n", sizeof(c), sizeof(pc));
	printf("sizeif(i): %d, sizeof(pi): %d\n", sizeof(i), sizeof(pi));
	printf("sizeif(l): %d, sizeof(pl): %d\n", sizeof(l), sizeof(pl));
	printf("sizeif(f): %d, sizeof(pf): %d\n", sizeof(f), sizeof(pf));
	printf("sizeif(d): %d, sizeof(pd): %d\n", sizeof(d), sizeof(pd));

	return 0;
}