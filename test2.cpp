# include <stdio.h>
# include <math.h>

int main()
{
	double p,r,n;
	r = 0.09;
	n = 10;

	p = pow((1 + r), n);
	printf("%f\n",p);
	
	return 0;
}