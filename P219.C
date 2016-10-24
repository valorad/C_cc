#include <stdio.h>

int main(void)
{

	char ch[128] = {'\0'};
	int i, j = 0;
	int shu = 0; //shuzigeshu
	char shuzi[128] = {'\0'};

	printf("Please input string: ");


	gets(ch);


	for (i = 0; ch[i] != '\0'; i++)
	{
	
		if (ch[i] >= '0' && ch[i] <= '9')
		{
		
			shu++;
			shuzi[j] = ch[i];
			j++;
		}
	}

	printf("\nshu zi ge shu wei: %d", shu);

	printf("\nshu zi wei: ");
	for (j = 0; shuzi[j] != '\0'; j++)
	{
	
		printf("%c", shuzi[j]);
	}
	printf("\n");
	return 0;
}
