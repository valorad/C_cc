#include <stdio.h>

int main(void)
{

	char str[101] = {'\0'};
	int ch, i = 0, len;

	printf("input a string: ");
	ch = getchar();
	while (ch != '\n' && ch != EOF && i <= 99)
	{
	
		str[i] = ch;
		i++;
		ch = getchar();
	}
	
	len = i;
	printf("\nThe string lenth is: %d", len);
	printf("\nThe string is: ");

	for (i = 0; i < len; i++)
	{
	
		printf("%c", str[i]);
	}
	printf("\n");

	return 0;
}
