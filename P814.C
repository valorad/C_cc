#include <stdio.h>

/* userCode(<50�ַ�): �Զ��庯��֮ԭ������ */
int add(int aa[][3], int n);

int main(void)
{
	int num[3][3], i, j, sum;

	printf("Please input the 3x3 Matrix:\n");
	for (i=0; i<3; i++)
	{
		for (j=0; j<3; j++)
		{
			scanf("%d", &num[i][j]);
		}
	}

	sum = add(num, 3);  /* userCode(<50�ַ�): ���ú��������������Ԫ��֮�� */
	printf("\nsum=%d\n", sum);
	return 0;
}

/* User Code Begin�������ڴ˺�����Զ��庯������ƣ��������� */

int add(int aa[][3], int n)
{

	int i, j;
	int sum = 0;

	for (i = 0; i < 3; i++)
	{
	
		for (j = 0; j < 3; j++)
		{
		
			sum = sum + aa[i][j];
		}
	}
	return sum;
}
