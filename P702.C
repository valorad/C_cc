#include <stdio.h>

int main(void)
{

	int month, days;

	printf("please input the month number: ");
	scanf("%d", &month);

	if ( month >= 1 && month <= 12)
	{
	
		switch (month)
		{
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:
				days = 31;
				break;
			case 4:
			case 6:
			case 9:
			case 11:
				days = 30;
				break;
			default:
				days = 28;
		}
		printf("\n2003.%d has %d days\n", month, days);
	}
	else
	{
	
		printf("\nInvalid month input !\n");
	}
	return 0;
}