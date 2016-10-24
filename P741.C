#include <stdio.h>

int jpn(int m);

int main(void)
{

	int m, n, fou = 0;
	int i;

	printf("Input the m, n: ");
	scanf("%d, %d", &m, &n);

	printf("\nThe result:\n");
	for (i = 1; fou < n; i++)
	{
	
		if ( jpn(m) == 1) //1 is prime
		{
		
			printf("%d ", m);
			fou++;
		}
		m++;
		
	}
	return 0;
}

int jpn(int m)
{
	int j;

	for (j = 2; j <= m - 1; j++)
	{
	
		if (m % j == 0)
		{
		
			return 0;
		}
	}

	return 1;
	
}