#include<stdio.h>

int main(void)
{

	int aa[3][3] = {0};
	int i, j;
	int sum = 0;

	printf("Please input the 3x3 Matrix:\n");
	for (i = 0; i <= 2; i++)
	{
	
		for (j = 0; j <= 2; j++)
		{
		
			scanf("%d", &aa[i][j]);
		}
	}

	//suan
	for (i = 0; i <= 2; i++)
	{
	
		for (j = 0; j <= 2; j++)
		{
		
			sum = sum + aa[i][j];
		}
	}

	printf("\nsum=%d\n", sum);
	return 0;
}