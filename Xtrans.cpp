# include <stdio.h>
int main()
{
char c1, c2;

c1 = getchar();

if (c1 >= 65 && c1 <=90) 
	c2 = c1 + 32; 
else if (c1 >= 97 && c1 <=122)
		c2 = c1 - 32;
	else	
	{
		printf("sb\n");
		c2 =255;
	}
putchar(c2);
putchar('\n');
	return 0;
}