#include <stdio.h>

void input(int aa[], int *count);  /* userCode(<50字符): 自定义函数1之原型声明 */
void output(int aa[], int *count);  /* userCode(<50字符): 自定义函数2之原型声明 */

int main(void)
{
	int num[16], count;

	printf("请输入若干个数: ");
	input(num, &count);  /* userCode(<30字符): 调用函数读入数据到num中并统计个数 */

	printf("\n共%d个数，倒序为: ", count);
	output(num, &count);  /* userCode(<30字符): 调用函数倒序输出num的所有元素 */

	return 0;
}

/* User Code Begin：考生在此后完成自定义函数的设计，行数不限 */
void input(int aa[], int *count)
{

	int i = 0, tmp;

	scanf("%d", &tmp);

	for (i = 0; i < 16; i++)
	{
	
		if (tmp == -1)
		{
		
			break;
		}
		else
		{	
			aa[i] = tmp;
			scanf("%d", &tmp);
		}

	}

	*count = i;
}

void output(int aa[], int *count)
{

	int i;

	for (i = *count - 1; i >= 0; i--)
	{
		printf("%d ", aa[i]);
	}
	
}