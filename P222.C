#include <stdio.h>
#include <string.h>

int main(void)
{

	char str[128] = {'\0'};
	int i;

	printf("Please input string: ");
	gets(str);

	for (i = 0; str[i] != '\0'; i++)
	{
	
		if ( 'A' <= str[i] && str[i] <= 'Z')
		{
		
			str[i] = 'A' + 'Z' - str[i];
		}
		else
		{
		
			if ( 'a' <= str[i] && str[i] <= 'z')
			{
			
				str[i] = 'a' + 'z' - str[i];
			}
			else
			{
			
				;
			}
		}
	}

	printf("\nzi fu chuan chang du: %d", strlen(str));
	printf("\nmi wen: %s", str);

	return 0;
}
