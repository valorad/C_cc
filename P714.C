#include <stdio.h>

int main(void)
{

	int aa[10], i, sum = 0, zheng = 0, fu = 0;
	
	printf("Input 10 integers: ");

	
	for (i = 0; i <= 9; i++)
	{
	
		scanf("%d", &aa[i]);
	}

	for (i = 0; i <= 9; i++)
	{
		if (aa[i] >= 0)
		{
		
			zheng = zheng + aa[i];
		}
		else
		{
		
			fu = fu + aa[i];
		}
		sum = sum + aa[i];
	}

	printf("\nzhengshu=%d,fushu=%d,all=%d", zheng, fu, sum);
	printf("\n");

	return 0;
}
