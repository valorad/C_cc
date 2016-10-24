#include<stdio.h>

/* userCode(<50字符): 自定义函数之原型声明 */
int lening(char str[]);

int main(void)
{
	int Len;
	char String[101] = "?????????????????????????????????????????????????????????????";

	printf("input a string: ");
	Len = lening(String);  /* userCode(<50字符): 调用函数实现输入并统计输入字符个数 */

	printf("\nThe string lenth is: %d\n", Len);
	printf("The string is: %s\n", String);

	return 0;
}

/* User Code Begin：考生在此后完成自定义函数的设计，行数不限 */
int lening(char str[])
{

	int i;
	int ch;

	ch = getchar();

	for (i = 0; i < 100; i++)
	{
	
		if (ch == '\n' || ch == EOF)
		{
		
			break;
		}
		else
		{
		
			str[i] = (char)ch;

		}

		ch = getchar();
	}

	str[i] = '\0';

	return i;
}