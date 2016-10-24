#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	double x, y, zz;

	if (argc != 4)
	{
	
		printf("    usage: P120  num1 num2 num3\n");
		return 23;
	}
	else
	{
	
		x = atof(argv[1]);
		y = atof(argv[2]);
		zz = atof(argv[3]);
		printf("    %.0f + (%.3f - %.3f) * 3   =  %.3f\n", x, y, zz, (x + (y - zz) * 3));
	}
	return 0;
}