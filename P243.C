#include <stdio.h>

/* userCode(<50�ַ�): �Զ��庯��֮ԭ������ */
float aver(int aa[], int nn);

int main(void)
{
	int arrA[5], arrB[8];
	float avgA, avgB;

	printf("������5������");
	scanf("%d%d%d%d%d", &arrA[0], &arrA[1], &arrA[2], &arrA[3], &arrA[4]);
	printf("������8������");
	scanf("%d%d%d%d%d%d%d%d", &arrB[0], &arrB[1], &arrB[2], &arrB[3], &arrB[4], &arrB[5], &arrB[6], &arrB[7]);

	avgA = aver(arrA, 5);  /* userCode(<30�ַ�): ���ú�������arrA����Ԫ�ص�ƽ��ֵ */
	printf("\nAvg(arrA) = %.1f", avgA);
	avgB = aver(arrB, 8);  /* userCode(<30�ַ�): ���ú�������arrB����Ԫ�ص�ƽ��ֵ */
	printf("\nAvg(arrB) = %.1f\n", avgB);

	return 0;
}

/* User Code Begin�������ڴ˺�����Զ��庯������ƣ��������� */

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

