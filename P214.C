#include <stdio.h>

int main(void)
{

	int i, j, n;

	printf("Please input n: ");
	scanf("%d", &n);
	
	for (i = 1; i <= n ; i++)
	{
	
		for (j = 1; j <= n; j++)
		{
		
			if (j == 1 || j == n - i + 1)
			{
			
				printf("$");
			}
			else
			{
			
				printf(" ");
			}
		}

		printf("\n");
	}

	for (i = 2; i <= n ; i++)
	{
	
		for (j = 1; j <= n; j++)
		{
		
			if (j == 1 || j == i)
			{
			
				printf("$");
			}
			else
			{
			
				printf(" ");
			}
		}

		printf("\n");
	}
	return 0;
}