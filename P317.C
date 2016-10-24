#include <stdio.h>

int main(void)
{

	FILE *fp1, *fp2;
	char sor[100], des[100];
	int ch, sta;

	// open sor
	printf("Please input sourceFilename: ");
	gets(sor);
	fp1 = fopen(sor, "rb");

	if (fp1 == NULL)
	{
		printf("\nsource File (%s) Open Error!\n", sor);
		return 2;
	}

	// create des
	printf("Please input destinationFilename: ");
	gets(des);
	fp2 = fopen(des, "wb");

	if (fp2 == NULL)
	{
		printf("\ndestination File (%s) Create Error!\n", des);
		fclose(fp1);
		return 3;
	}

	//go copy
	ch = fgetc(fp1);
	while (!feof(fp1))
	{
		sta = fputc(ch, fp2);
		if (sta == EOF)
		{
			printf("\nwriting destination File (%s) Error!\n", des);
			fclose(fp1);
			fclose(fp2);
			return 4;
		}
		ch = fgetc(fp1);
	}

	printf("\ncopy %s to %s successed!\n", sor, des); //dian nao lao shi ying si zao, wu li tu cao * 10086!

	fclose(fp1);
	fclose(fp2);
	return 0;



}