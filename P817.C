#include<stdio.h>
#include<string.h>

/* userCode(<50字符): 自定义函数之原型声明 */
void nixu(char str[]);

int main(void)
{
	char str[128];

	printf("Input a string: ");
	gets(str);

	nixu(str);  /* userCode(<50字符): 调用函数将字符串str逆序存放 */
	printf("\nThe result is: %s\n", str);
	return 0;
}

/* User Code Begin：考生在此后完成自定义函数的设计，行数不限 */

void nixu(char str[])
{

	int i, j, len;
	char rts[128] = {'\0'};

	strcpy(rts, str);
	len = strlen(str);
	for (i = len, j = 0 ; i >= 0; i--, j++)
	{
	
		str[j + 0] = rts[i - 1];
	}
	str[j - 1] = '\0';

}