#include <stdio.h>

int main(void)
{

	int n, i;
	double sn = 0, hn = 10000;

	printf("Please input n: ");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
	
		sn = sn + hn * 2;		
		hn = hn / 2.0;
	}
	
	sn = sn - 10000;

	
	printf("\nsn=%lf,hn=%lf\n", sn, hn);

	return 0;
}

