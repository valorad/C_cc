#include <stdio.h>

double func(int x);

int main(void)
{
	int n;
	double fn;

	printf("Input n (13>=n>=2): ");
	scanf("%d", &n);

	fn = func(n);
	printf("\nf(%d)=%.0lf\n", n, fn);
	return 0;
}

double func(int x)
{

	double res;

	if (x == 0)
	{
	
		res = 0;
	}
	else
	{
	
		if (x == 1)
		{
		
			res = 1;
		}
		else
		{
		
			if (x == 2)
			{
			
				res = 2;
			}
			else
			{
			
				res = 2 * func(x - 1) + func(x - 2) * func(x - 3);
			}
		}
	}
	
	return res;
}
