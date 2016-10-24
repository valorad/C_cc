#include <stdio.h>
#include <math.h>

int main(void)
{
	int money, year;
	double lixi;

	printf("Please input benjin,cunqi: ");
	scanf("%d%*c%d", &money, &year);
	switch (year)
	{
		case 1:
			lixi = money * 0.0315;
			break;
		case 2:
			lixi = money * 0.0363 * 2;
			break;
		case 3:
			lixi = money * 0.0402 * 3;
			break;
		case 5:
			lixi = money * 0.0469 * 5;
			break;
		case 8:
			lixi = money * 0.0536 * 8;
		default:
			;
	}
	printf("\nlixi = %0.2f yuan\n", lixi);

	return 0;
}