#include<stdio.h>

int main(void)
{

	int aa[20][20] = {0};
	int m, maxi, maxj, max;
	int i, j;

	printf("Please input m: ");
	scanf("%d", &m);

	//ru
	printf("\nPlease input array:\n");
	for (i = 0; i <= m - 1; i++)
	{
	
		for (j = 0; j <= m - 1; j++)
		{
		
			scanf("%d", &aa[i][j]);
		}
	}

	//bijiao
	max = 0;
	maxi = 0;
	maxj = 0;

	for (i = 0; i <= m - 1; i++)
	{
	
		for (j = 0; j <= m - 1; j++)
		{
		
			if (max < aa[i][j])
			{
			
				max = aa[i][j];
				maxi = i;
				maxj = j;
			}
		}
	}

	//chu
	printf("\nmax=%d,i=%d,j=%d\n", max, maxi, maxj);

	return 0;
}