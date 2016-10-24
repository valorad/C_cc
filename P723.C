#include <stdio.h>
#include <math.h>

int main(void)
{

	double bian1, bian2, bian3, area, ppppppppp, ttt=0;

	printf("please input triange sides: ");
	scanf("%lf, %lf, %lf", &bian1, &bian2, &bian3);

	//¶Ôa,b,c½øÐÐÉýÐòÅÅÐò
	if (bian1 >= bian2)
	{
		ttt = bian1;
		bian1 = bian2;
		bian2 = ttt;
	}
	else
	{
		;
	}

	if (bian2 >= bian3)
	{
	
		ttt = bian2;
		bian2 = bian3;
		bian3 = ttt;
	}
	else
	{
		;
	}

	if (bian1 + bian2 >= bian3)
	{
	
		ppppppppp = (bian1 + bian2 + bian3) / 2;
		area = sqrt (ppppppppp * (ppppppppp - bian1) * (ppppppppp - bian2) * (ppppppppp - bian3));
		printf("\narea=%.2lf\n", area);
	}
	else
	{
	
		printf("\ndata error\n");
	}
	return 0;
}