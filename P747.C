#include <stdio.h>

int main(void)
{

	int aa[15] = {0}, num, i, ver = 0;

	printf("please input 15 integer numbers:\n");

	//输入数据
	for (i = 0; i <= 14; i++)
	{
		scanf("%d", &aa[i]);
	}

	//输入检查数
	printf("please input the integer you want to find: ");
	scanf("%d", &num);

	//查找
	for (i = 0; i <= 14; i++)
	{
	
		if (num == aa[i])
		{
		
			printf("\n%d has been found,it is a[%d]\n", num, i);
			ver++;
			break;
		}
		else
		{
		
			;
		}
	}

	if (ver == 0)
	{
		printf("\n%d has not been found\n", num);
	}
	

	return 0;
}