#include <stdio.h>

int main(void)
{

	FILE *fp;
	int x = 0, y = 0;
	char op = '0';
	char suanshi[201];
	int n = 0, num;


	fp = fopen("Comp.txt", "r");

	if (fp == NULL)
	{
		printf("Failed to open file \n");
		return 1;
	}

	fgets(suanshi, 201, fp);
	num = sscanf(suanshi, "%d %c %d", &x, &op, &y);

	while (!feof(fp))
	{
		n++;
		if (num == 3)
		{

			if (op == '+')
			{
				printf("Line %03d:  %5d + %-5d = %-6d\n", n, x, y, x + y);
			}
			else
			{
				printf("Line %03d:  %5d - %-5d = %-6d\n", n, x, y, x - y);
			}
		}
		else
		{
			if (num != EOF)
			{
				printf("Line %03d: Error!\n", n);
			}
		}
		fgets(suanshi, 201, fp);
		num = sscanf(suanshi, "%d %c %d", &x, &op, &y);
	}

	fclose(fp);
	return 0;
}