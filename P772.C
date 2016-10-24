#include <stdio.h>
#include <string.h>

int main(void)
{

	char str[128] = {'\0'}, ch, slot;
	int i = 0, j, len;

	printf("input the string: ");
	ch = getchar();
	while (ch != '\n')
	{
	
		str[i] = ch;
		i++;
		ch = getchar();
	}
//	puts(str);
	len = strlen(str);

	for (i = 0; i < len; i++)
	{
	
		for (j = i + 1; j < len; j++)
		{
		
			if (str[i] > str[j])
			{
			
				slot = str[i];
				str[i] = str[j];
				str[j] = slot;

			}
		}
	}

	printf("\nResult: ");
	puts(str);

	return 0;
}