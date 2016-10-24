#include <stdio.h>

double func(int x);

int main(void)
{

	int n, i;
	double fn[20] = {0};

	printf("input a data(3--20): ");
	scanf("%d", &n);

	for (i = 0; i <= n - 1; i++)
	{
	
		fn[i] = func(i + 1);
	}
	
	for (i = 0; i <= n - 2; i++)
	{
	
		printf("%.0lf\t", fn[i]);
	}
	printf("%.0lf", fn[n - 1]);
	return 0;
}

double func(int x)
{

	double res;

	if (x == 1)
	{
	
		res = 1;
	}
	else
	{
	
		if (x == 2)
		{
		
			res = 1;
		}
		else
		{
		
			res = func(x - 1) + func(x - 2);
		}
	}
	return res;
}