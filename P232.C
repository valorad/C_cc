#include <stdio.h>

int main(void)
{
	int i = 0, Num = 0, sum = 0;
	int gw = 0, sw = 0, bw = 0;

	printf("Please Input a number: ");
	scanf("%d", &Num);

	printf("\nResult: ");
	if (Num >= 100 && Num <= 1000)
	{
		for (i = 100; i <= 999; i++)
		{
			gw = i % 10;
			bw = i / 100;
			sw = (i - bw * 100 ) / 10;
			if (gw * gw + sw * sw + bw * bw + i / 2 == Num)
			{
				sum = sum + 1;
				printf("%5d",   i);
			}
			else
			{
			
				;
			}

		}
	
		if (sum == 0)
		{
		
			printf("not Find!\n");
		}
		else
		{
		
			;
		}
	}
	else
	{
	
		printf("not 3 !\n");

	}
	printf("\n");

	return 0;
}