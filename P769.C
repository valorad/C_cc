#include <stdio.h>

int sushu(int n);
int huiwen(int n);

int main(void)
{
	int i, j = 0;
	int m, n;
	int arr[10000] = {0};

	printf("please input m, n(5<=m<=n<=100000): ");
	scanf("%d,%d", &m, &n);

	for (i = m; i <= n; i++)
	{
		if ((sushu(i) == 1) && (huiwen(i) == 1)); //判断素数
		{
			arr[j] = i;
			j++;
		}
	}



	printf("Result(%d-%d):\n", m, n);
	for (i = 0; i < j; i++)
	{
		printf("%d ", arr[i]);
	}
	
}
//- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
int sushu(int n)
{
	int i, flag = 1;
	
	for(i = 2; i <= n - 1; i++)
	{
		if (n % i == 0)
		{
			flag = 0;
			break;
		}
	}

	
	if (flag == 1) //1说明是质数
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

//- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
int huiwen(int n)
{
	int i = 0, x, count = 0;
	int aa[6]; //放位数

	x = n % 10;
	while (x != 0)
	{
		aa[count] = x;
		count++;
		n = n / 10;
		x = n % 10;
	}

	if (count == 1)
	{
		return 1; //返回1就是回文
	}

	if (count == 2)
	{
		if (aa[0] == aa[1])
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}

	if (count == 3)
	{
		if (aa[0] == aa[2])
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}

	if (count == 4)
	{
		if (aa[0] == aa[3] && aa[1] == aa[2])
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}

	if (count == 5)
	{
		if (aa[0] == aa[4] && aa[1] == aa[3])
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}

	return 0;
}