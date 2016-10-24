#include <stdio.h>

int main(void)
{

	char aa[128] = {'\0'};
	int i = 0, j = 0;

	printf("Input a string: ");
	gets(aa);
	while (aa[i] != '\0')
	{
	
		i++;
		j++;
	} 

	printf("\nThe result is: ");

	for (i = j; i >= 0; i--)
	{
	
		printf("%c", aa[i]);
	}

	printf("\n");

	return 0;
}