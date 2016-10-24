#include <stdio.h>

int main(void)
{
	FILE *fp;
	int x, y;
	char op;

	fp = fopen("Comp.txt", "r");

	if (fp == NULL)
	{
		printf("failed to open file");
		return - 1;
	}

	fscanf(fp, "%d %c %d", &x, &op, &y);

	if (op == '+')
	{
		printf("%d + %d = %d\n", x, y, x + y);
	}
	else
	{
		printf("%d - %d = %d\n", x, y, x - y);
	}

	fclose(fp);

	return 0;

}