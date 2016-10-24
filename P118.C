#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	double x, y;

	if (argc != 3)
	{
	
		printf("    usage: P118  num1 num2\n");
		return 103;
	}
	else
	{
	
		x = atof(argv[1]);
		y = atof(argv[2]);
		printf("    (%.3f*%.3f - %.3f*%.3f) / 6   =  %.3f\n", x, x, y, y, ((x * x - y * y) / 6.0));
	}
	return 0;
}