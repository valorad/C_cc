/*
����Ĺ��ܣ�
�������һ��m��n����İ��㡪��������ָ��λ���ϵ�Ԫ���ڸ�����Ϊ����ڸ�����Ϊ��С��
�����п���û�а��㣬�����ֻ��һ�����㡣
m��n(2<=m<=20��2<=n<=20)������Ԫ�شӼ�������(ֻ����int�ͺ�ÿ�С�ÿ����û�в��������С�����)��
*/

#include <stdio.h>

int main(void)
{
	int arr[20][20], i, j, max, min, maxHPos,
		maxLPos, minHPos, minLPos, flag = 0, m, n, k;

	/* ������������m������n */	
	printf("Please input m and n:");
	scanf("%d%d", &m, &n);
	
	/* �Ӽ�������m��n���󣬲���ŵ�����arr�� */
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}

	/* �ھ������Ұ��� */
	for (i = 0; i < m; i++)
	{
		/* �ҵ�i�е����ֵ�����ֵ���±꣨�����б���б꣩��i��ֵ��0��ʼ */
		max = arr[i][0];  
		maxHPos = i;
		maxLPos = 0;
		for (j = 1; j < n; j++)
		{
			if (arr[i][j] > max)
			{
				max = arr[i][j];
				maxHPos = i;
				maxLPos = j;
			}
		}
		
		/* �ڵ�i�е����ֵ�������Ҹ��е���Сֵ�����±� */
		min = arr[0][maxLPos];
		minHPos = 0;
		minLPos = maxLPos;
		for (k = 1; k < m; k++)
		{
			if (arr[k][maxLPos] < min)
			{
				min = arr[k][maxLPos];
				minHPos = k;
				minLPos = maxLPos;
			}
		}
		
		/* �жϵ�i�е����ֵ�Ƿ��ǵ�i�����ֵ�����е���Сֵ������ǣ��ҵ�����*/
		if ((maxHPos == minHPos) && (maxLPos == minLPos))
		{
			printf("you an dian, wei:a[%d][%d]=%d\n", maxHPos,
				maxLPos, arr[maxHPos][maxLPos]);
			flag = 1;  //������flag��ֵ1����ʾ�������ҵ�
			break;  //�������ҵ����������ҹ���
		}
	}
	if (0 == flag) //flag��ֵΪ0����ʾ�ھ�����û���ҵ�����
	{
		printf("mei you an dian.\n");
	}
	
	return 0;
}