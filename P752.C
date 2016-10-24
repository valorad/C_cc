#include <stdio.h>

int main(void)
{
	int m, n;
	int i = 0;
	int bw, sw, gw ;

	printf("Input m, n: ");
	scanf("%d,%d", &m, &n);

	printf("\nResult:");

	if (m <= n)
	{
		
		for (i = m; i <= n; i++)
		{
		
			if (i % 3 == 0)
			{
			
				gw = i % 10;
				bw = i / 100;
				sw = (i - bw * 100 ) / 10;

				if (gw == 5 || sw == 5 || bw == 5)
				{
				
					printf(" %d", i);
				}
				else
				{
				
					;
				}
			}
			else
			{
			
				;
			}
		}

	}
	else
	{
	
		for (i = n; i <= m; i++)
		{
		
			if (i % 3 == 0)
			{
			
				gw = i % 10;
				bw = i / 100;
				sw = (i - bw * 100 ) / 10;

				if (gw == 5 || sw == 5 || bw == 5)
				{
				
					printf(" %d", i);
				}
				else
				{
				
					;
				}
			}
			else
			{
			
				;
			}
		}		
	}
	printf("\n");
	return 0;
}