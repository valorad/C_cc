#include <stdio.h>

/* userCode(<50�ַ�): �Զ��庯��֮ԭ������ */
double func(int nn);

int main(void)
{
	int n;
	double fn;

	printf("Input n (13>=n>=2): ");
	scanf("%d", &n);

	fn = func(n);  /* userCode(<50�ַ�): ���ú�������fn */
	printf("\nf(%d)=%.0f\n", n, fn);

	return 0;
}

/* User Code Begin�������ڴ˺�����Զ��庯������ƣ��������� */
double func(int nn)
{

	double res;

	if (nn == 0)
	{
		res = 0;
	}
	else
	{
		if (nn == 1)
		{		
			res = 1;
		}
		else
		{
		
			if (nn == 2)
			{
			
				res = 2;
			}
			else
			{
			
				res = 2 * func(nn - 1) + func(nn - 2) * func(nn - 3);
			}
		}
	}
	return res;
}