#include <stdio.h>

int main(void)
{
	FILE *fp;
	int x, y, zz;
	char op1, op2;

	fp = fopen("Comp.txt", "r");

	if (fp == NULL)
	{
		printf("failed to open file");
		return - 1;
	}

	fscanf(fp, "%d %c %d %c %d", &x, &op1, &y, &op2, &zz);

	switch (op1)
	{
		case '+':
			switch (op2)
			{
				case '+':
					printf("%d %c %d %c %d = %d\n", x, op1, y, op2, zz, x + y + zz);
					break;
				case '-':
					printf("%d %c %d %c %d = %d\n", x, op1, y, op2, zz, x + y - zz);
					break;
				case '*':
					printf("%d %c %d %c %d = %d\n", x, op1, y, op2, zz, x + y * zz);
					break;
				default:
					printf("unsupported character '%c' ", op2);
			}

			break;

		case '-':
			switch (op2)
			{
				case '+':
					printf("%d %c %d %c %d = %d\n", x, op1, y, op2, zz, x - y + zz);
					break;
				case '-':
					printf("%d %c %d %c %d = %d\n", x, op1, y, op2, zz, x - y - zz);
					break;
				case '*':
					printf("%d %c %d %c %d = %d\n", x, op1, y, op2, zz, x - y * zz);
					break;
				default:
					printf("unsupported character '%c' ", op2);
			}
			break;
		case '*':
			switch (op2)
			{
				case '+':
					printf("%d %c %d %c %d = %d\n", x, op1, y, op2, zz, x * y + zz);
					break;
				case '-':
					printf("%d %c %d %c %d = %d\n", x, op1, y, op2, zz, x * y - zz);
					break;
				case '*':
					printf("%d %c %d %c %d = %d\n", x, op1, y, op2, zz, x * y * zz);
					break;
				default:
					printf("unsupported character '%c' ", op2);
			}
			break;
		default:
			printf("unsupported character '%c' ", op1);
	}



	fclose(fp);

	return 0;

}