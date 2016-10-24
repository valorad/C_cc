#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	double x, y, zz;

	if (argc != 4)
	{
	
		printf("    usage: P121  num1 num2 num3\n");
		return 97;
	}
	else
	{
	
		x = atof(argv[2]);
		y = atof(argv[3]);
		zz = atof(argv[1]);
		printf("    %.0f + (%.3f*%.3f - %.3f*%.3f) / 6   =  %.3f\n", zz, x, x, y, y, (zz + (x * x - y * y) / 6.0));
	}
	return 0;
}