# include <stdio.h>


int main(void)
{
int m,n;

m=1;

while (m <= 6)
{	
	n=1;
	while (n <= m)
	{
		printf("%d X %d = %d ;",m ,n ,m*n );
		n++;
	}
printf("\n",m);
m++;
}
}
