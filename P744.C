#include <stdio.h>

int main(void)
{

	float score;
	char grade;

	printf("please input the score(0-100): ");
	scanf("%f", &score);

	if (score > 100.0 || score < 0.0)
	{
	
		do
		{
		
			printf("please input the score(0-100): ");
			scanf("%f", &score);
		} while (score > 100.0 || score < 0.0);
	}
	else
	{
	
		;
	}

	switch ( (int)score / 10)
	{
		
		case 10:
		case 9:
			grade = 'A';
			break;
		case 8:
			grade = 'B';
			break;
		case 7:
			grade = 'C';
			break;
		case 6:
			grade = 'D';
			break;
		default:
			grade = 'E';
			break;

	}
	printf("\nscore=%.1f,grade=%c\n", score, grade);
	return 0;
}