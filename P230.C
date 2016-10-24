#include <stdio.h>

int main(void)
{

	int iBegin, iCount, i;

	printf("Please Input two number: ");
	scanf("%d%d", &iBegin, &iCount);

	printf("\nResult: ");
	printf(" %d", iBegin);

	for (i = 1; i < iCount; i++)
	{
	
		iBegin = iBegin + 5;
		printf(" %d", iBegin);
	}

	printf("\n");
	return 0;
}
