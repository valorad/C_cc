#include <stdio.h>

/* userCode(<70字符): 自定义函数之原型声明 */
int find(int aa[], int n, int num);

int main(void)
{
	int arrA[5], arrB[8], num, maxA, maxB;

	printf("请输入5个数：");
	scanf("%d%d%d%d%d", &arrA[0], &arrA[1], &arrA[2], &arrA[3], &arrA[4]);
	printf("请输入8个数：");
	scanf("%d%d%d%d%d%d%d%d", &arrB[0], &arrB[1], &arrB[2], &arrB[3], &arrB[4], &arrB[5], &arrB[6], &arrB[7]);
	printf("请再输入一个数：");
	scanf("%d", &num);

	maxA = find(arrA, 5, num);  /* userCode(<50字符): 调用函数查找在arrA中小于num的最大数 */
	if (-1 == maxA)
	{
		printf("\narrA: not Find!");
	}
	else
	{
		printf("\nMax(arrA) = %d", maxA);
	}

	maxB = find(arrB, 8, num);  /* userCode(<50字符): 调用函数查找在arrB中小于num的最大数 */
	if (-1 == maxB)
	{
		printf("\narrB: not Find!\n");
	}
	else
	{
		printf("\nMax(arrB) = %d\n", maxB);
	}

	return 0;
}

/* User Code Begin：考生在此后完成自定义函数的设计，行数不限 */

int find(int aa[], int n, int num)
{

	int i, fm = -1, max = 0;

	for (i = 0; i < n; i++)
	{
	
		if (aa[i] < num)
		{
			if (aa[i] > max)
			{
			
				fm = aa[i];
				max = aa[i];
			}
		}
	}
	return fm;
}
