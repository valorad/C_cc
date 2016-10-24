#include <stdio.h>

int main(void)
{

	int benj;
	int nian;
	double lixi = 0;

	printf("Please input benjin,cunqi: ");
	scanf("%d,%d", &benj, &nian);

	if (nian == 1)
	{
	
		lixi = (double)benj * 0.0315;
	}
	else
	{

		if (nian == 2)
		{
		
			lixi = (double)benj * 0.0363 * 2;
		}
		else
		{
		
			if (nian == 3)
			{
			
				lixi = (double)benj * 0.0402 * 3;
			}
			else
			{
			
				if (nian == 5)
				{
				
					lixi = (double)benj * 0.0469 * 5;
				}
				else
				{
				
					if (nian == 8)
					{
					
						lixi = (double)benj * 0.0536 * 8;
					}
					else
					{
					
						;
					}
				}
			}
		}
	}

	printf("\nlixi = %.2lf yuan\n", lixi);

	return 0;
}