#include <stdio.h>
#include <math.h>

/* userCode(<50字符): 自定义函数之原型声明 */
int jpn(int m, int n);

int main(void)
{
	int m, n, cnt;

	printf("Input the m, n: ");
	scanf("%d,%d", &m, &n);

	printf("\nThe result:\n");
	for (cnt=0; cnt<n; m++)
	{
		if (jpn(m, n) == 1)/* userCode(<50字符): 调用函数判断m是否为素数 */
		{
			printf("%d ", m);
			cnt++;
		}
	}
	putchar('\n');

	return 0;
}

/* User Code Begin：考生在此后完成自定义函数的设计，行数不限 */

int jpn(int m, int n)
{

	int i, flag = 1;

	for (i = 2; i <= m - 1; i++)
	{
	
		if (m % i == 0)
		{
			flag = 0;		
			break;
		}
	}
	if (flag == 0)
	{
	
		return 0;
	}
	else
	{
	
		return 1;
	}
}