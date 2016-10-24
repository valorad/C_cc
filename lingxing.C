#include <stdio.h>

int main()
{

	char lx[][5] = { {' ',' ','*',' ',' '}, {' ','*',' ','*',' '}, {'*',' ',' ',' ','*'}, {' ','*',' ','*',' '}, {' ',' ','*',' ',' '} };
	int i, j;

	for (i = 0; i < 5; i++)
	{
	
		for (j = 0; j < 5; j++)
		{
		
			printf("%c", lx[i][j]);

		}
	printf("\n");
	}

	printf("\n");
	return 0;
}
