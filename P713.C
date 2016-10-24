#include <stdio.h>

int main(void)
{

	int monthd[13]= {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int i, year, month, day, sum = 0;

	printf("Please input year-month-day: ");
	scanf("%d-%d-%d", &year, &month, &day);

	//判断闰年
	if ( (year % 100 == 0 && year % 400 == 0) || (year % 4 == 0 && year % 100 !=0) )
	{
	
		monthd[2] = 29;
	}
	
	for (i = 1; i <= month - 1; i++)
	{
	
		sum = sum + monthd[i];
	}

	sum = sum + day;

	printf("\nIt is the %dth day.\n", sum);
	//吐槽：老师的英语水平啊。。。
	return 0;
}