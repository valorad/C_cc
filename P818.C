#include <stdio.h>

#define N 20

/* userCode(<50�ַ�): �Զ��庯��֮ԭ������ */
void max(int aa[][20], int m, int n);

int main(void)
{
	int m, n;
	int hang, lie, juZhen[N][N];

	printf("Please input m and n: ");
	scanf("%d%d", &m, &n);

	printf("Please input a juZhen(%d hang, %d lie):\n", m, n);
	for (hang = 0; hang < m; hang++)
	{
		for (lie = 0; lie < n; lie++)
		{
			scanf("%d", &juZhen[hang][lie]);
		}
	}
	puts("");

	max(juZhen, m, n);  /* userCode(<50�ַ�): ���ú����ҳ�ÿһ���ϵ����ֵ�����±겢��ʾ����ʽҪ����ʾ */
	return 0;
}

/* User Code Begin�������ڴ˺�����Զ��庯������ƣ��������� */
void max(int aa[][20], int m, int n)
{
	int i, j, k = 0, max = 0, maxj[20] = {0};

	for (i = 0; i < m; i++)
	{
	
		for (j = 0; j < n; j++)
		{
		
			if (aa[i][j] > max)
			{
			
				max = aa[i][j];
				maxj[k] = j;

			}
			if (j == n - 1)
			{
			
				k++;
				max = 0;
			}

		}
	}
	for (i = 0; i < k; i++)
	{
	
		printf("The max value in line %d is %d\n", i, maxj[i]);
	}

}

