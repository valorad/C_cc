#include <stdio.h>
#include <math.h>

int main(void)
{
	double a[5]={0}, x=0, xp;
	double b[5]={0},x2=0;
	double sqrdc ;
	int  i=0, j=0;
	

	
	for(i=0;i<=4;i++)
	{
		printf("enter %d\n",i);
		scanf("%lf",&a[i]);
		x = x + a[i];// sum
	}

	xp = x / 5;
	i = 0;
	
	for(j=0;j<=4;j++)
	{
		b[j] = (a[i] - xp) * (a[i] - xp); // power2
		x2 = x2 + b[j];
		i = i + 1;
	}
	
	sqrdc = sqrt( (x2 / 20));

	printf("%.3lf\n",sqrdc);
	return 0;
}