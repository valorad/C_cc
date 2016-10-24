#include <stdio.h>

int main(void)
{

	int year, month, day;
	int i, sum = 0;
	int monthd[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	printf("input a data(year-month-day):");
	scanf("%d-%d-%d", &year, &month, &day);

	//年
	for (i = 1; i <= year-1; i++)
	{
	
		if ( (i % 100 == 0 && i % 400 == 0) || (i % 4 == 0 && i % 100 != 0)) //判断闰年
		{
		
			sum = sum + 366;
		}
		else
		{
		
			sum = sum + 365;
		}
	}
	//月
	if (month >= 3)
	{
		
		if ( (year % 100 == 0 && year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) //判断闰年
		{
			
			sum++;
		}
	}
	
	for (i = 1; i <= month - 1; i++)
	{
		
		sum = sum + monthd[i];
	}
	//日
	sum = sum + day;
	
	printf("\nThe result is %d\n", sum);

	return 0;
}