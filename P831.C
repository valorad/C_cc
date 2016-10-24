#include <stdio.h>

int main(void)
{

	int aa[40], i, num = 0, sum = 0;
	int max = 0, min;
	double ave, per;

	printf("请输入40位同学的成绩：");


	for (i = 0; i <= 39; i++)
	{
		scanf("%d", &aa[i]);
	}

	max = aa[0];
	min = aa[0];

	for (i = 0; i <= 39; i++)
	{
	
		//最高分判断

		if (aa[i] > max)
		{
		
			max = aa[i];
		}

		//最低分判断

		if (aa[i] < min)
		{
		
			min = aa[i];
		}
		
		//计算总分

		sum = sum + aa[i];

		//是否及格
		if (aa[i] >= 60)
		{
		
			num++;
		}
	}

	//计算平均分
	ave = sum / 40.0;
	//计算及格率（百分部分）
	per = num / 40.0 * 100;
	
	printf("\n最高分：%d\n最低分：%d\n平均分：%.1lf\n及格率：%.0lf%%\n", max, min, ave, per);
	return 0;
}