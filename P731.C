#include <stdio.h>

int main(void)
{

	int n, i, j;

	printf("please input n: ");
	scanf("%d", &n);

	printf("\n");
	for (i = 1; i <= n; i++)
	{
	
		for (j = 1; j <= 5; j++)
		{
		
			printf("* ");
		}

		printf("\n");
	}
	return 0;
}