#include <stdio.h>

int main(void)
{
	FILE* fp;
	
	fp = fopen("hello.txt", "wt");
	fprintf(fp, "Hello, World!\n");
	fclose(fp);
	
	fp = fopen("hello.txt", "at");
	fprintf(fp, "Hello, World!\n");
	fclose(fp);
	
	if((fp = fopen("hell.txt","rt")) != NULL)
	{		
		fclose(fp);
	}
	
	else
	{
		printf("File open error!!!\n");
	}
	
	return 0;
}