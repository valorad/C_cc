#include<stdio.h>

int main(void)
{

	int n, m = 0;
	int ws[30] = {0};
	int sum=0, i = 0, k = 0;

	printf("请输入一个数：");
	scanf("%d", &n);

	do
	{
	
		ws[i] = n % 10;
		i = i + 1;

		n = (n / 10);
	} while (n != 0);

	k = i;
	printf("\n该数的各位数之逆序为：");

	for (i = 0; i < k; i++)
	{
		printf("%d", ws[i]);
		sum = sum + ws[i];
	}

	printf("\n该数的各位数之和为：%d\n", sum);

	return 0;
}