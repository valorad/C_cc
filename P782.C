#include <stdio.h>

/* User Code Begin(�������ڱ��к����Ӵ��룬����ȫ�ֱ����Ķ��塢����ԭ�������ȣ���������) */
struct po
{
	int num;
	char name[19];
	float score1;
	float score2;
	float score3;
	float score4;
	float aver;
};

int maxav(struct po data[]);

/* User Code End(�������Ӵ������) */

int main(void)
{
	int high;  /* high��¼ƽ������ߵ�ѧ������ţ�����ʹ�òο�����Ĵ��� */

	/* User Code Begin(�������ڱ��к����Ӵ��룬��������) */
	struct po myClass[5];
	int i;

	printf("Please input students  info:Num Name score1 score2 score3 score4\n");
	for (i = 0; i < 5; i++)
	{
		printf("%d:", i + 1);
		scanf("%d %s %f %f %f %f", &myClass[i].num, myClass[i].name, &myClass[i].score1, &myClass[i].score2, &myClass[i].score3, &myClass[i].score4);
		myClass[i].aver = (float)(myClass[i].score1 + myClass[i].score2 + myClass[i].score3 + myClass[i].score4) / 4;
	}

	high = maxav(myClass);


	/* User Code End(�������Ӵ������) */

	printf("\nThe Highest is %s(%d)\nscore1=%.2f  score2=%.2f  score3=%.2f  score4=%.2f  aver=%.2f\n",
		myClass[high].name, myClass[high].num,
		myClass[high].score1, myClass[high].score2, myClass[high].score3, myClass[high].score4, myClass[high].aver);

	return 0;
}

/* User Code Begin(�����ڴ˺���������Ҫ��ɳ�����������֣���������) */
int maxav(struct po data[])
{
	float max;
	int i, maxi;

	max = data[0].aver;
	for (i = 0; i < 5; i++)
	if (data[i].aver > max)
	{
		max = data[i].aver;
		maxi = i;
	}

	return maxi;

}

