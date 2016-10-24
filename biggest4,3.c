#include <stdio.h>

int main()
{
	int i=0, j=0;
	int row=0, column=0;
	int max;
	int a[3][4]={{1,2,3,4},{9,8,7,6},{-10,10,-5,2}};

	for(i=0;i<=2;i++)
	{
	
		for(j=0;j<=2;j++)
		{
		
			if(a[i][j] > max)
			{
			
				max = a[i][j];
				row = i;
				column = j;
			}
			else
			{
			
				;
			}
		}
	}
	printf("biggest is %d\nrow=%d \ncolumn=%d\n",max,row,column);

	return 0;
}