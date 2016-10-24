#include <stdio.h>

int main(void)
{

	char str[128] = {'\0'};
	int i, j = 1, len[64] = {0}, max = 0;

	printf("please input a string:\n");
	gets(str);

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && str[i] != '\n')
		{
		
			len[j] = len[j] + 1;
			
		}
		else
		{
		
			j++;
		}
		
	}


	for (i = 1; i <= j; i++)
	{
	
		if (len[i] > max)
		{
		
			max = len[i];
		}
	}

	printf("\nmax_length of the string is: %d\n", max);
	return 0;
}
