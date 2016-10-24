#include <stdio.h>

int main(void)
{

	const int year = 2006;
	double ym = 5000.0, ks = 0.0;
	double x = 0;
	int adyear = 0, i = 0 , fyear = 0;

	printf("Please input x: ");
	scanf("%lf", &x);

	ks = ym; // yuanlaide
	do
	{
		ym = ym * (1 + x / 100 );
		i = i + 1;
	} while ((ym / ks) < 2);


	adyear = i;
	fyear = year + adyear;

	printf("\nyear = %d nian, chanzhi = %.2lf\n", fyear, ym);
	return 0;
}