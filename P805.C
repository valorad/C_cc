#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/* User Code Begin(考生可在本行后添加代码，定义程序中使用的结构体类型，行数不限) */
struct goods
{
	char pinming[20];
	char guige[12];
	long shuliang;
	float danjia;
};


/* User Code End(考生添加代码结束) */

int main(void)
{
	int n;
	char sppm[20];
	struct goods SP;
	FILE *fp;

	printf("please input shang pin pin ming:");
	gets(sppm);

	fp = fopen("d:\\cExam\\sp.dat", "rb");
	if (NULL == fp)
	{
		printf("\nfile open error!");
		exit(0);
	}

	n = 0;
	printf("\ncha zhao qing kuang :");
	/* User Code Begin(考生可在本行后添加代码，行数不限) */
	fread(SP.pinming, 20, 1, fp);
	fread(SP.guige, 12, 1, fp);
	fread(&SP.shuliang, sizeof(long), 1, fp);
	fread(&SP.danjia, sizeof(float), 1, fp);
	while (!feof(fp))
	{
	
	
	/* User Code End(考生添加代码结束) */
			if (strcmp(sppm, SP.pinming) == 0)
			{
				n++;
				printf("\n%s,%s,%ld,%.2f", SP.pinming, SP.guige, SP.shuliang, SP.danjia);
			}
	/* User Code Begin(考生可在本行后添加代码，行数不限) */
		fread(SP.pinming, 20, 1, fp);
		fread(SP.guige, 12, 1, fp);
		fread(&SP.shuliang, sizeof(long), 1, fp);
		fread(&SP.danjia, sizeof(float), 1, fp);
	}
	
	if (n == 0)
	{
		printf("\nmei you shang pin :%s", sppm);
	}

	fclose(fp);
			
	/* User Code End(考生添加代码结束) */

	return 0;
}
