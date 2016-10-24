#include <stdio.h>

/* userCode(<50字符): 自定义函数之原型声明 */
double pux(int n, int x);

int main(void)
{
	double Pnx;
	int n, x;

	printf("please input n, x: ");
	scanf("%d,%d", &n, &x);

	Pnx = pux(n, x);  /* userCode(<50字符): 调用函数计算Pn(x) */
	printf("\nThe answer is %.6f.\n", Pnx);
	return 0;
}

/* User Code Begin：考生在此后完成自定义函数的设计，行数不限 */

double pux(int n, int x)
{

	double res;

	if (n == 0)
	{
	
		res = 1;
	}
	else
	{
	
		if (n == 1)
		{
			res = x;
		}
		else
		{
		
			res = ((2 * (n) - 1) * x * pux(n - 1, x) - (n - 1) * pux(n - 2, x)) / ((n) * 1.0);
		}
	}

	return res;
}

