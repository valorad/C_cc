# include <stdio.h>
int main()
{
	float p1,p2,p3,b,r1=0.0036 ,r2=0.0225 ,r3=0.0198;
	printf("or money\n");
	scanf("%f",&b);
	
	
	p1 = b * (1 + r1 );
	p2 = b * (1 + r2 );
	p3 = b * (1 + r3/2 ) * (1 + r3/2 );

	printf(" p1=%f\n p2=%f\n p3=%f\n",p1,p2,p3);

	return 0;
}