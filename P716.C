#include <stdio.h>
#include <math.h>

int main(void)
{
	int i, n;
	double a = 0 , sum = 0, ss = 0;

	printf("Please input a,n: ");
	scanf("%lf,%d", &a, &n);

	for (i = 0; i < n; i++)
	{
		sum = sum + a * pow(10, i);
		ss = ss + sum;
	}
	printf("\na+aa+...=%.0lf\n", ss);

	return 0;
}