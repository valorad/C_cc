#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct goods
{
	char pinming[21];
	char guige[11];
	long int shuliang;
	float danjia;
};

int main(void)
{
	int n;
	char sppm[21];
	FILE *fp;
	struct goods SP;

	printf("Please input shang pin pin ming:");
	gets(sppm);

	/* User Code Begin(考生可在本行后添加代码，行数不限) */
	fp = fopen("sp.txt", "r");
	if (fp == NULL)
	{
		printf("failed to open file sp.txt\n");
		return - 1;
	}

	
	/* User Code End(考生添加代码结束) */

	n = 0;
	printf("\ncha zhao qing kuang:");
	/* User Code Begin(考生可在本行后添加代码，行数不限) */

	fscanf(fp, "%s %s %f %ld", SP.pinming, SP.guige, &SP.danjia, &SP.shuliang);
	while (!feof(fp))
	{
	/* User Code End(考生添加代码结束) */
			if (strcmp(sppm, SP.pinming) == 0)
			{
				n++;
				printf("\n%s,%s,%ld,%.2f", SP.pinming, SP.guige, SP.shuliang, SP.danjia);
			}
	/* User Code Begin(考生可在本行后添加代码，行数不限) */
	fscanf(fp, "%s %s %f %ld", SP.pinming, SP.guige, &SP.danjia, &SP.shuliang);
	}

/*
	fscanf(fp, "%s %s %f %ld", SP.pinming, SP.guige, &SP.danjia, &SP.shuliang);
	if (strcmp(sppm, SP.pinming) == 0)
	{
		n++;
		printf("\n%s,%s,%ld,%.2f", SP.pinming, SP.guige, SP.shuliang, SP.danjia);
	}
*/
	if (n == 0)
	{
		printf("\nmei you shang pin :%s", sppm);
	}


	/* User Code End(考生添加代码结束) */

	return 0;
}
