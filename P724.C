#include <stdio.h>

int main(void)
{

	int i, j, n;

	printf("input a number(1~9): ");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
	
		for (j = 1; j <= i; j++)
		{
		
			printf("%d*%d=%-3d", i, j, i*j); 
		}
		printf("\n");
	}

	return 0;
}