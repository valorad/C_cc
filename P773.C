#include <stdio.h>
#include <math.h>

int ddd(int y0, int m0, int d0);

int main(void)
{

	int y1, m1, d1, y2, m2, d2, ds1, ds2;

	printf("from the date (****/**/**):\n");
	scanf("%d/%d/%d", &y1, &m1, &d1);
	printf("to the date(****/**/**):\n");
	scanf("%d/%d/%d", &y2, &m2, &d2);

	ds1 = ddd(y1, m1, d1);
	ds2 = ddd(y2, m2, d2);

	printf("\nsum=%d\n", abs(ds2 - ds1));
	return 0;
}

int ddd(int y0, int m0, int d0)
{

	int i, sum = 0;
	int mon[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	//nian
	for (i = 1; i <= y0 - 1; i++)
	{
		if ( (i % 100 == 0 && i % 400 == 0) || ( (i % 100 != 0) && (i % 4 == 0) ) )	//pan duan run nian
		{
		
			sum = sum + 366;
		}
		else
		{
		
			sum = sum + 365;
		}
	}

	//yue

	for (i = 1; i <= m0 - 1; i++)
	{
		if (y0 % 400 == 0 || (y0 % 100 != 0 && y0 % 4 == 0) && i == 2)	//pan duan run nian
		{
			
			sum = sum + mon[i] + 1;
		}	
		else
		{
		
			sum = sum + mon[i];
		}
		
	}
	//ri
	sum = sum + d0;
	return sum;
}