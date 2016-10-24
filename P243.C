#include <stdio.h>

/* userCode(<50字符): 自定义函数之原型声明 */
float aver(int aa[], int nn);

int main(void)
{
	int arrA[5], arrB[8];
	float avgA, avgB;

	printf("请输入5个数：");
	scanf("%d%d%d%d%d", &arrA[0], &arrA[1], &arrA[2], &arrA[3], &arrA[4]);
	printf("请输入8个数：");
	scanf("%d%d%d%d%d%d%d%d", &arrB[0], &arrB[1], &arrB[2], &arrB[3], &arrB[4], &arrB[5], &arrB[6], &arrB[7]);

	avgA = aver(arrA, 5);  /* userCode(<30字符): 调用函数计算arrA所有元素的平均值 */
	printf("\nAvg(arrA) = %.1f", avgA);
	avgB = aver(arrB, 8);  /* userCode(<30字符): 调用函数计算arrB所有元素的平均值 */
	printf("\nAvg(arrB) = %.1f\n", avgB);

	return 0;
}

/* User Code Begin：考生在此后完成自定义函数的设计，行数不限 */

float aver(int aa[], int nn)
{

	float res, sum = 0;
	int i;

	for (i = 0; i < nn; i++)
	{
	
		sum = sum + aa[i];
	}
	res = sum / nn;

	return res;
}


