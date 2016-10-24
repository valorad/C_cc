#include <stdio.h>

#define MAX 20

/* userCode(<80字符): 自定义函数之原型声明 */
void rotate(int m, int arr[][20], int arr2[][20]);

int main(void)
{
	int arrayA[MAX][MAX], arrayB[MAX][MAX], i, j, m;

	printf("Please input m: ");
	scanf("%d", &m);

	printf("Please input arrayA:\n");
	for (i=0; i<m; i++)
	{
		for (j=0; j<m; j++)
		{
			scanf("%d", &arrayA[i][j]);
		}
	}

	rotate(m, arrayA, arrayB);  /* userCode(<60字符): 调用函数实现数组内容变换 */
	printf("\nafter rotate:\n");
	for (i=0; i<m; i++)
	{
		for (j=0; j<m; j++)
		{
			printf("%6d", arrayB[i][j]);
		}
		putchar('\n');
	}

	return 0;
}

/* User Code Begin：考生在此后完成自定义函数的设计，行数不限 */

void rotate(int m, int arr[][20], int arr2[][20])
{

	int i, j, aa[20] = {0}, bb[20] = {0};

	for (i = 0; i < m; i++)
	{
		for (j = 0; j < m; j++)
		{
			arr2[i][j] = arr[i][j];
		}
	}

	for (i = 0; i < m; i++)
	{
		arr2[i][0] = arr[m - 1][i];
		arr2[i][m - 1] = arr[0][i];
	}
}

