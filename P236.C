#include <stdio.h>

int main(void)
{

	int aa[20][20];
	int i, j;
	int sum = 0, m;

	printf("Please input m: ");
	scanf("%d", &m);

	//ru
	printf("\nPlease input array:\n");
	for (i = 0; i <= m -1; i++)
	{	
		for (j = 0; j <= m - 1; j++)
		{
		
			scanf("%d", &aa[i][j]);
		}
	}

	//suan
	for (i = 0; i <= m -1; i++)
	{	
		for (j = 0; j <= m - 1; j++)
		{
		
			if (i == 0 || i == 2 || i == m - 1)
			{
			
				sum = sum + aa[i][j];
			}
		}
	}

	printf("\nSum = %d\n", sum);
	return 0;
}