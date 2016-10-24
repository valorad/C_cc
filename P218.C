#include <stdio.h>

int main(void)
{

	int m = 0, i, j, sum = 0;
	int aa[20][20] = {0};

	printf("Please input m: ");
	scanf("%d", &m);

	//ru
	printf("Please input array:\n");
	for (i = 0; i <= m - 1; i++)
	{
	
		for (j = 0; j <= m - 1; j++)
		{
		
			scanf("%d", &aa[i][j]);
		}
	}

	//suan
	for (i = 0; i <= m - 1; i++)
	{
	
		for (j = 0; j <= m - 1; j++)
		{
		
			if ( i == 0 || j == 0 || i == m - 1 || j == m - 1)
			{
			
				sum = sum + aa[i][j];
			}
		}
	}

	printf("\nsum=%d\n", sum);
	return 0;
}
