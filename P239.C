#include <stdio.h>

int main(void)
{

	int aa[16] = {0}, i, reg, num = 0;

	printf("请输入若干个数: ");
	for (i = 0; i <= 15; i++)
	{
		scanf("%d", &reg);
		if (reg == -1)
		{
		
			break;
		}
		aa[num] = reg;
		num++;
	}
	printf("\n这些数倒序为: ");
	for (i = num - 1; i >= 0; i--)
	{
	
		printf("%d ", aa[i]);
	}
	return 0;
}