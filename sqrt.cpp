# include <stdio.h>
# include <math.h>

int main()
{
double x1,x2,disc,a,b,c;
printf("a,b,c\n");
scanf("%lf%lf%lf",&a,&b,&c);


disc = b * b - 4 * a * c;
x1 = ((-b) + sqrt(disc))/ (2 * a);     //jiubuyong
x2 = ((-b) - sqrt(disc))/ (2 * a);

printf("x1=%3.5f\t x2=%3.5f\n",x1,x2);
char();
	return 0;
}