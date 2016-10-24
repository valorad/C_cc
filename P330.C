#include <stdio.h>

int main(void)
{

	FILE *fp;
	int ch;
	char dir[128];

	printf("input the file's name: ");
	gets(dir);
	fp = fopen(dir, "r");

	if (fp == NULL)
	{
	
		printf("\nfile open error!");
		return - 1;
	}

	printf("------------------------File Begin:----------------------\n");
	ch = fgetc(fp);
	while (feof(fp) == 0)
	{
		if (ch == '*')
		{
		
			ch = '@';
		}
	
		printf("%c", ch);
		ch = fgetc(fp);
	}

	printf("\n------------------------ File End. ----------------------\n");

	fclose(fp);

	return 0;
}