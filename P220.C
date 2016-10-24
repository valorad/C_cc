#include <stdio.h>

int main(void)
{

	char ch[128];
	int i;
	int zimu = 0, shuzi = 0, kongge = 0, qita = 0;

	printf("Please input string: ");
	gets(ch);

	for (i = 0; ch[i] != '\0'; i++)
	{
	
		//zimu
		if ( (ch[i] >= 'A' && ch[i] <= 'Z') || (ch[i] >= 'a' && ch[i] <= 'z'))
		{
		
			zimu++;
		}
		else
		{
		
			//shuzi
			if (ch[i] >= '0' && ch[i] <= '9')
			{
			
				shuzi++;
			}
			else
			{
				//kongge			
				if (ch[i] == ' ')
				{
				
					kongge++;
				}
				else
				{
				
					//qita
					qita++;
				}
			}
		}
	}

	printf("\nzimu=%d,shuzi=%d,kongge=%d,qita=%d\n", zimu, shuzi, kongge, qita);
	return 0;
}
