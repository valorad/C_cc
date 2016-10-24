#include <stdio.h>

int main(void)
{

	int i = 1;
	double n = 1, kk = 1;
	double sum = 0.0;

	printf("Please input n: ");
	scanf("%lf", &n);

	

	for (i = 1; i <= n; i++)
	{
	
		kk = kk * i;
		sum = sum + (1.0 / kk);
	}

	printf("\nS=1/1!+1/2!+...+1/%.0lf!=%.16lf\n", n, sum);

	return 0;
}