#include <stdio.h>

/* userCode(<70�ַ�): �Զ��庯��֮ԭ������ */
int count(int aa[], int n);

int main(void)
{
	int arrA[5], arrB[8], countA, countB;

	printf("������5������");
	scanf("%d%d%d%d%d", &arrA[0], &arrA[1], &arrA[2], &arrA[3], &arrA[4]);
	printf("������8������");
	scanf("%d%d%d%d%d%d%d%d", &arrB[0], &arrB[1], &arrB[2], &arrB[3], &arrB[4], &arrB[5], &arrB[6], &arrB[7]);

	countA = count(arrA, 5);  /* userCode(<50�ַ�): ���ú�������arrA��С����ƽ��ֵ��Ԫ�ظ��� */
	printf("\nCount(arrA) = %d", countA);
	countB = count(arrB, 8);  /* userCode(<50�ַ�): ���ú�������arrB��С����ƽ��ֵ��Ԫ�ظ��� */
	printf("\nCount(arrB) = %d\n", countB);

	return 0;
}

/* User Code Begin�������ڴ˺�����Զ��庯������ƣ��������� */

int count(int aa[], int n)
{

	int i, sum = 0, num = 0;
	double ave;

	for (i = 0; i < n; i++)
	{
	
		sum = sum + aa[i];
	}
	ave = sum * 1.0 / n;
	for (i = 0; i < n; i++)
	{
	
		if (aa[i] < ave)
		{
		
			num++;
		}
	}
	return num;
}
