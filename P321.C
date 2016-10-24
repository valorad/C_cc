#include <stdio.h>

int main(void)
{
	FILE *fp;
	int x, y, n = 0, num;
	char op;

	fp = fopen("Comp.txt", "r");

	if (fp == NULL)
	{
		printf("failed to open file");
		return - 1;
	}

	num = fscanf(fp, "%d %c %d", &x, &op, &y);
	while (num == 3)
	{
		n++;
		if (op == '+')
		{
			printf("Line %03d:  %5d + %-5d = %-6d\n", n, x, y, x + y);
		}
		else
		{
			printf("Line %03d:  %5d - %-5d = %-6d\n", n, x, y, x - y);
		}
		num = fscanf(fp, "%d %c %d", &x, &op, &y);
	}
	fclose(fp);

	return 0;

}