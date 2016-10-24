#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	double x, y;

	if (argc != 3)
	{
	
		printf("    usage: P117  num1 num2\n");
		return 76;
	}
	else
	{
	
		x = atof(argv[1]);
		y = atof(argv[2]);
		printf("    (%.3f - %.3f) * 3   =  %.3f\n", x, y, ((x - y) * 3));
	}
	return 0;
}