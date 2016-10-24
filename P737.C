#include <stdio.h>
#include <math.h>

int main(void)
{
	int num1, num2, num3, num1d, num2d, num3d;

	printf("Input 3 numbers: ");
	scanf("%d,%d,%d", &num1, &num2, &num3);

	num1d = abs(num1);
	num2d = abs(num2);
	num3d = abs(num3);
	if (num1d >= num2d)
	{
	
		if (num1d >= num3d)
		{
		
			printf("\nThe number with maximum absolute value is %d.\n", num1);
		}
		else
		{
		
			printf("\nThe number with maximum absolute value is %d.\n", num3);
		}
	}
	else
	{
		if (num2d >= num3d)
		{
		
			printf("\nThe number with maximum absolute value is %d.\n", num2);
		}
		else
		{
		
			printf("\nThe number with maximum absolute value is %d.\n", num3);
		}
	}
	return 0;
}