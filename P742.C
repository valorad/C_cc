#include <stdio.h>

int main(void)
{

	int aa[5], bb[5], i, sum = 0;

	printf("Input A: ");

	for (i = 0; i <= 4; i++)
	{
	
		scanf("%d", &aa[i]);
	}

	printf("Input B: ");

	for (i = 0; i <= 4; i++)
	{
	
		scanf("%d", &bb[i]);
	}

	for (i = 0; i <= 4; i++)
	{
	
		sum = sum + aa[i] * bb[4 - i];
	}

	printf("\nsum=%d\n", sum);

	return 0;
}