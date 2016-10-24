#include <stdio.h>

int main(void)
{
	double x = 0, ex = 1;
	int y , i = 0;

	printf("Input x, y: ");
	scanf("%lf,%d", &x, &y);

	if (y > 0)
	{
	
		for (i = 0; i < y; i++)
		{
		
			ex = ex * x;

		}
		printf("\nResult: %lf^%d=%lf\n", x, y, ex);
	}
	else 
	{
	
		if (y == 0)
		{
			if (x == 0)
			{
			
				printf("Error!\n");
			}
			else
			{
			
				ex = 1;
				printf("\nResult: x^y=%lf", ex);
			}
		
			
		}
		else
		{
		
			for (i = 0; i < -y; i++)
			{
			
				ex = ex * x;

			}

			printf("\nResult: %lf^%d=%lf\n", x, y, 1/ex);
		}
	}
	return 0;
}