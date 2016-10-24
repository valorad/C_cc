#include <stdio.h>

int main(void)
{

	int aa[10] = {0}, i, j, slot = 0, tt = 0;

	printf("please input 10 integer numbers: ");

	for (i = 0; i <= 9; i++)
	{
		scanf("%d", &aa[i]);
	}

	printf("\nthe array before sorted: ");

	for (i = 0; i <= 9; i++)
	{
	
		printf("%d ", aa[i]);
	}

	//zhengli

	for (j = 0; j <= 10; j++)
	{
	
		for (i = 0; i <= 8; i++)
		{
			if (aa[i] > aa[i+1])
			{
			
				slot = aa[i+1];
				aa[i+1] = aa[i];
				aa[i] = slot;
			}

		}
	}


/*	for (i = 0; i <= 8; i++)
	{
		slot = a[i];
		for (j = i + 1; j <= 9; j++)
		{
			if (slot > a[j])
			{
			
				tt = slot;
				slot = a[j];
			}
			
		}*/

/*		if (a[i] < a[i + 1])
		{
		
			slot = a[i];
		}

		a[i] = slot;
	}*/

	printf("\nthe array after  sorted: ");

	for (i = 0; i <= 9; i++)
	{
	
		printf("%d ", aa[i]);
	}

	printf("\n");
	return 0;
}