#include <stdio.h>

int main(void)
{

	int x = 0;
	double y;

	printf("Please input x:");
	scanf("%d", &x);

	if (x < 0)
	{
		y = -5 * (double)x + 27;
	}
	if (x == 0)    
	{
		y = 7909;
	}
	if (x > 0)
	{
		y = 2 * (double)x - 1;
	}

	printf("\nF(%d) = %.0lf\n", x, y);
	return 0;
}
