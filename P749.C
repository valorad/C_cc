#include <stdio.h>

int main(void)
{

	int num, aa[5][5];
	int i, j;

	printf("Please input an integer: ");
	scanf("%d", &num);

	//ru
	for (i = 0; i <= 4; i++)
	{
	
		for (j = 0; j <= 4; j++)
		{
		
			aa[i][j] = i + j + num;
		}
	}

	//chu
	for (i = 0; i <= 4; i++)
	{
	
		for (j = 0; j <= 4; j++)
		{
		
			printf("%4d", aa[i][j]);
		}
		printf("\n");
	}
	return 0;
}