#include <stdio.h>

int main(void)
{

	int n = 0, sum = 1, i = 0;

	printf("Please input n: ");
	scanf("%d", &n);

	for (i = 0; i < n - 1; i++)
	{
	
		sum = ( sum + 1 ) * 2;
	}
	printf("\ntotal=%d\n", sum);

	return 0;
}

