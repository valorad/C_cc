#include <stdio.h>

int main(void)
{

	int m, sum = 0;
	int aa[20][20] = {0};
	int i, j;

	printf("Please input m: ");
	scanf("%d", &m);

	printf("Please input array:\n");
	//ru
	for (i = 0; i <= m - 1; i++)
	{
	
		for (j = 0; j <= m - 1; j++)
		{
		
			scanf("%d", &aa[i][j]);
		}
	}

	//jisuan
	for (i = 0; i <= m - 1; i++)
	{
	
		for (j = 0; j <= m - 1; j++)
		{
		
			if (i == j || i + j + 1 == m)
			{
			
				sum = sum + aa[i][j];
			}
		}
	}

	printf("\nsum=%d\n", sum);
	return 0;
}
