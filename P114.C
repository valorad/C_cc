#include <stdio.h>

int main(void)
{
	
	int data1, data2;
	double res;
	char op;

	printf("Please input data1 op data2: ");
	scanf("%d %c %d", &data1, &op, &data2);
	
	switch (op)
	{
		case '+':
			res = (double)data1 + (double)data2 ;
			printf("\n%d+%d=%.0lf\n", data1, data2, res);
			break;
		case '-':
			res = (double)data1 - (double)data2 ;
			printf("\n%d-%d=%.0lf\n", data1, data2, res);
			break;
		case '*':
			res = (double)data1 * (double)data2 ;
			printf("\n%d*%d=%.0lf\n", data1, data2, res);
			break;
		case '/':
			if (data2 == 0)
			{
			
				printf("\nError! chu shu wei 0.\n");
			}
			else
			{
			
				res = (double)data1 / (double)data2 ;
				printf("\n%d/%d=%.0lf\n", data1, data2, res);
			}
			break;
		case '%':
			if (data2 == 0)
			{
			
				printf("\nError! chu shu wei 0.\n");
			}
			else
			{
			
				res = data1 % data2 ;
				printf("\n%d%%%d=%.0lf\n", data1, data2, res);
			}
			break;
		default:
			printf("\ninvalid operator!\n");
	}
	return 0;
}