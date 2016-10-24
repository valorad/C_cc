#include <stdio.h>

int main(void)
{
	// ¿Æ½ÌÂ¥6l 608
	char cBegin = 0, cEnd = 0;
	int i = 0;

	printf("Please Input two char: ");
	scanf("%c%c", &cBegin, &cEnd);

	printf("\nResult: ");
	for (i = cBegin; i >= cEnd; i--)
	{
	
		putchar(i);
	}
	printf("\n");

	return 0;
}