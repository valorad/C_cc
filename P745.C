#include <stdio.h>

int main(void)
{
	int m, n, lcm , ramm;
	
	printf("please input two integer numbers: ");
	scanf("%d %d", &m, &n);

	ramm = m * n;
	while (m != n)
	{
	
		if (m > n)
		{
		
			m = m - n;
		}
		else
		{
		
			n = n - m;
		}
	}

	lcm = ramm / m;

	printf("\nthe greatest common divisor is %d", m);
	printf("\nthe least common multiple is %d\n", lcm);

	return 0;
}
