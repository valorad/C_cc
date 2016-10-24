#include <stdio.h>

int main(void)
{

	char str[101] = {'\0'};
	char res[101] = {'\0'};
	int i = 0, j = 0;

	printf("Please input a string: ");
	gets(str);

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != '*')
		{
			res[j] = str[i];
			j++;
		}
	}

	printf("\nThe result is: ");

	puts(res);
	return 0;
}
