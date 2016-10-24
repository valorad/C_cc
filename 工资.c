#include<stdio.h>
#define M 500
void main()
{
	int p,s;
	printf("Input profit>");
	scanf("%d",&p);
	if(p>=0)
	{
		if(p<=1000&&p>=0)
			s=M;
		else if(p>1000&&p<=2000)
			s=M+p*0.1;
		else if(p>2000&&p<=5000)
			s=M+p*0.15;
		else if(p>5000&&p<=10000)
			s=M+p*0.2;
		else if(p>10000)
			s=M+p*0.25;
		printf("salary=%d\n",s);
	}
	else
		printf(" ‰»Î¥ÌŒÛ£°£°£°\n");
}
