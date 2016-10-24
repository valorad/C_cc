#include <stdio.h>

int main(void)
{

	int pro;
	double sal;


	printf("Input  profit: ");
	scanf("%d", &pro);

	if (pro <= 1000)
	{
	
		sal = 500 + pro * 0; 
	}
	else
	{
	
		if (pro > 1000 && pro <= 2000)
		{
		
			sal = pro * 0.1 + 500 ;
		}
		else
		{
		
			if (pro > 2000 && pro <= 5000)
			{
			
				sal = pro * 0.15 + 500;
			}
			else
			{
			
				if (pro > 5000 && pro <= 10000)
				{
				
					sal = pro * 0.2 + 500;
				}
				else
				{
				
					if (pro > 10000)
					{
					
						sal = pro * 0.25 + 500;
					}
				}
			}
		}
	}
	printf("\nsalary=%.2lf\n", sal);

	return 0;
}