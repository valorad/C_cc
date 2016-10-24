#include<stdio.h>

int main(void)
{

	int aa[14][14] = {0};
	int i, j;
	int n, sum1 = 0, sum2 = 0;

	printf("Enter n: ");
	scanf("%d", &n);

	//arrey, initializing
	for (i = 0; i <= n - 1; i++)
	{
	
		for (j = 0; j <= n - 1; j++)
		{
		
			aa[i][j] = (i + j) * n;
		}
	}

	//arrey, output
	for (i = 0; i <= n - 1; i++)
	{
	
		for (j = 0; j <= n - 1; j++)
		{
		
			printf("%4d", aa[i][j]);
		}
		printf("\n");
	}

	//sum1
	for (i = 0; i <= n - 1; i++)
	{
	
		for (j = 0; j <= n - 1; j++)
		{
		
			if (i != 0 && j != 0 && i != n - 1 && j != n - 1)
			{
			
				sum1 = sum1 + aa[i][j];
			}
		}
	}

	//sum2
	for (i = 0; i <= n - 1; i++)
	{
	
		for (j = 0; j <= n - 1; j++)
		{
		
			if (i == j)
			{
			
				sum2 = sum2 + aa[i][j];
			}
		}
	}

	printf("\nsum1=%d\nsum2=%d\n", sum1, sum2);
	return 0;
}