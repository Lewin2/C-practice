#include <stdio.h>

int main(void)
{
	FILE *fp;
	char str[1000];
	char* p = str;
	
	if ((fp = fopen("hello.txt", "rt")) != NULL)
	{
		while ((*p++ = fgetc(fp)) != EOF); 
		fclose(fp);
		*--p = '\0';
		printf(str);
	}
	
	else
	{
		printf("File open error!!!\n");
	}
	
	return 0;
}