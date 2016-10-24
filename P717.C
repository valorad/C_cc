#include <stdio.h>

int main(void)
{

	int aa[10], i, num = 0;

	printf("Input 10 integers: ");
	for (i = 0; i <= 9; i++)
	{
	
		scanf("%d", &aa[i]);
	}
	for (i = 0; i <= 9; i++)
	{
		if (i % 2 != 0 && aa[i] % 2 != 0)
		{
		
			num++;
		}
	}

	printf("\ncount=%d\n", num);

	for (i = 0; i <= 9; i++)
	{
	
		if (i % 2 != 0 && aa[i] % 2 != 0)
		{
		
			printf("a[%d]=%d\n", i, aa[i]);
		}

	}



	return 0;
}
