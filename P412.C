#include <stdio.h>

int main(void)
{

	int aa[10000] = {0}, i = 0, j = 0, num = 0, slot, reg;
	
	printf("Please input numbers: ");
	for (i = 0; i <= 9999; i++)
	{
		scanf("%d", &reg);
		if (reg == -222)
		{
		
			break;
		}	
		aa[i] = reg;
		num = num + 1;

	}
//	printf("%d   %d", i-1, aa[i-1]);
	//从小到大排序
	for (i = 0; i <= num - 2; i++) //对num个数排序，所以此处不能是i <= 30
	{
	
		for (j = i + 1; j <= num - 1; j++)  //已修改 
		{
			if (aa[j] < aa[i]) //已修改 
			{
			
				slot = aa[j]; 
				aa[j] = aa[i]; //已修改 
				aa[i] = slot; //已修改 
			}
		}
	}

	//输出
	printf("\nOutput:\n");
	for (i = 0; i <= num - 1  ; i++)
	{		
		if ((i + 1) % 6 == 0 || i == num - 1 ) //已删除i!=0的条件
		{
		
			printf("%-6d\n", aa[i]);
		}
		else
		{
		
			printf("%-6d,", aa[i]);
		}
	}
	
	return 0;
}
