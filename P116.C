#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	double x, y;

	if (argc != 3)
	{
	
		printf("    usage: P116  num1 num2\n");
		return 9;
	}
	else
	{
	
		x = atof(argv[1]);
		y = atof(argv[2]);
		printf("    (%.3f + %.3f) / 2   =  %.3f\n", x, y, ((x + y) / 2.0));
	}
	return 0;
}