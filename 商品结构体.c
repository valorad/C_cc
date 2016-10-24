#include<stdio.h>
#include<stdlib.h>
typedef struct shangpin
{
	char name[10];
	char num[10];
	char price[10];
	char guige[10];
}SP;





int main()
{
	int i,i1,b[100];
	//char a[10];
	FILE *fp =NULL;
	struct shangpin SP;
	fp=fopen("a.txt","w+");
	
	//scanf("%s%s%s%s",SP.name,SP.num,SP.price,SP.guige);
	//fprintf(fp,"%s,%s,%s,%s",SP.name,SP.num,SP.price,SP.guige);
	for(i=1;i<=50;i++)
	{
		b[i]=i;
		fprintf(fp,"%d\n",b[i]);
	}

		

	
	
	
	
	//303449538 who?c
	
	
	
	rewind(fp);
	fclose(fp);
	fp=fopen("a.txt","r+");

	for(i1=1;i1<=50;i1++)
	{
		f



















	//fscanf(fp,"%c,%c,%c,%c",&a[0],&a[1],&a[2],&a[3]);
	//printf("%c,%c,%c,%c\n",a[0],a[1],a[2],a[3]);
	fclose(fp);



	
	
	

	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
