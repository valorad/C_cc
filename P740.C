#include <stdio.h>

int main(void)
{

	int cock = 0, hen = 0, chick = 0, money = 0, num = 0;

	printf("Input the money: ");
	scanf("%d", &money);
	printf("Input the number: ");
	scanf("%d", &num);

	// x+y+z=num
	// 5x+3y+z/3=money
	// z=num-y-x

	printf("\n  cock   hen chick\n");
	for (cock = 0; cock <= (money / 5); cock++) // (num / 5)应该改为(money / 5)
	{
	
		for (hen = 0; hen <= (money / 3); hen++) // (num / 3)应该改为(money / 3)
		{
			chick = num - hen - cock;

			if ((chick >= 0) && (chick % 3 == 0)) //(chick >= 0), 不是(chick > 0)，要考虑chick为零的情况
			{
			
				if (5 * cock + 3 * hen + chick / 3 == money)
				{
				
					printf("%6d%6d%6d\n", cock, hen, chick); //根据题目要求，输出格式应该是%6d%6d%6d\n
				}
			    //此处已经删除else分支，因为else分支不需要做任何操作，所以此处选择第一种形式的if语句，即只有if没有else
			}
			//此处已经删除else分支，因为else分支不需要做任何操作，所以此处选择第一种形式的if语句，即只有if没有else
			
		}
	}


	return 0;
}