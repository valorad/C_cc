#include <stdio.h>

int main(void)
{

	int n = 0, i = 0, j = 0;
	char aa = 'a';

	printf("Please input n: ");
	scanf("%d", &n);

	for (i = 1; i <= n ; i++)
	{
		for (j = 1; j <= 2 * n + 1 ; j++)
		{
		
			if ((i + j == n + 2) || (j - i == n) || (i - j == n) || (i + j == 3 * n + 2))
			{
		
				printf("%c", aa);
			}
			else
			{
			
				printf(" ");
			}
			
		}
		printf("\n");
		aa = aa + 1;
	}
	
	aa = aa - 2;

	for (i = n - 1; i >= 1 ; i--)
	{
		for (j = 1; j <= 2 * n + 1 ; j++)
		{
		
			if ((i + j == n + 2) || (j - i == n) || (i - j == n) || (i + j == 3 * n + 2))
			{
		
				printf("%c", aa);
			}
			else
			{
			
				printf(" ");
			}
			
		}
		printf("\n");
		aa = aa - 1;
	}

	return 0;
}
