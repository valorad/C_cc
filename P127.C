#include <stdio.h>

int main(void)
{
	char cBegin;
	int iCount, i = 0;

	printf("Please Input a char and a number: ");
	scanf("%c%d", &cBegin, &iCount);

	printf("\nResult: ");

	for (i = 0; i <= iCount-1; i++)
	{
	
		putchar(cBegin);
		cBegin = cBegin - 1;
	}
	printf("\n");
	return 0;
}