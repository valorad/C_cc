#include <stdio.h>

/* userCode(<50字符): 自定义函数之原型声明 */
int func(int x);

int main(void)
{
	int n;
	long int Fn;

	printf("Please input a number: ");
	scanf("%d", &n);

	Fn = func(n);  /* userCode(<50字符): 调用函数计算f(n) */
	printf("\nf(%d) = %ld\n", n, Fn);
	return 0;
}

/* User Code Begin：考生在此后完成自定义函数的设计，行数不限 */

int func(int x)
{

	int res;

	if (x == 1)
	{
	
		res = 1;
	}
	else
	{
	
		if (x < 1)
		{
		
			res = 0;
		}
		else
		{
		
			res = 2 * func(x / 2) + x;
		}
	}
	return res;
}

