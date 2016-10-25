#include <stdio.h>
#include <malloc.h>

typedef struct Lnode
{
	float data;
	struct Lnode *next;
}Lnode, *LinkList;

static int length = 0;
static int lengthB = 0;
static unsigned int TableC = 0; //biao de ge shu

/*创建单链表 头插*/
LinkList iCreateA(int *count)
{
	LinkList L, R;
	float a;
	int i = 1;


	L= (LinkList)malloc(sizeof(Lnode));
	L -> next = NULL;
	printf("链表数据%d:", i);
	scanf("%f", &a);

	while (a != -1)
	{
		R = (LinkList)malloc(sizeof(Lnode));
		R -> data = a;
		R -> next = L -> next;
		L -> next = R;

		i++;
		*count = i - 1;
		printf("链表数据%d:", i);
		scanf("%f", &a);
	}
	return L;
}

/*创建单链表 尾插*/
LinkList iCreateB(int *count)
{
	LinkList L, R, T;
	int i = 1;
	float a;

	L= (LinkList)malloc(sizeof(Lnode));
	T = L;
	L -> next = NULL;
	printf("链表数据%d:", i);
	scanf("%f", &a);

	while (a != -1)
	{
		R = (LinkList)malloc(sizeof(Lnode));

		R -> data = a;
		R -> next = NULL;
		T -> next = R;
		T = R;

		i++;
		*count = i - 1;
		printf("链表数据%d:", i);
		scanf("%f", &a);
	}
	return L;
}
/*访问特定节点*/
int iVisit(LinkList L, int i)
{
	LinkList P;
	int j = 1;

	P = L -> next;

	while (j < i)
	{
//		printf("%f\n", P -> data);
		if (P -> next == NULL)
		{
			return -1; //can shu you wu ti qian fan hui mei you i
		}
		else
		{
			j++;
			P = P -> next;
		}

	}
	printf("no.%d is %f\n", i, P -> data);
	return 0;

}

/*删除特定节点*/
int iDel(LinkList L, int i)
{
	LinkList P, R;
	int j = 1;

	if (L -> next == NULL)
	{
		return 1;
	}

	P = L -> next;
	while (j < i - 1)
	{
		if (P -> next == NULL)
		{
			return -1; //can shu you wu ti qian fan hui mei you i - 1
		}
		else
		{
			j++;
			P = P -> next;
		}
	}

	R = P -> next;

	if (R == NULL)
	{
		return -2; // mei you i, zhi you i-1
	}

	P -> next = R -> next;
	free(R);
	R = NULL;


	printf("No.%d sucessfully deleted!\n", i);
//	(*count)--;
	return 0;

}

/*排序
int iSort(LinkList L)
{
	LinkList P, R;
	int i, j;
	return 0;
}*/

/*双表软合并
int iCombine(LinkList L1, Linklist L2)
{
	LinkList P, R;

	P = L1 -> next;
	R = L2 -> next;

	while (P -> next != NULL)
	{
//		printf("%f\n", P -> data);
		if (P -> next == NULL)
		{
			return -1; //can shu you wu ti qian fan hui mei you i
		}
		else
		{
			j++;
			P = P -> next;
		}

	}
	printf("no.%d is %f\n", i, P -> data);
	return 0;

}*/

/*插入*/
int iInsert(LinkList L, int i, float datium)
{
	LinkList P, R, T;

	int j = 1;
	P = L -> next;

	while(j < i)
	{
		if (P -> next == NULL)
		{
			return -1; //can shu you wu ti qian fan hui mei you i
		}
		else
		{
			j++;
			P = P -> next;
		}
	}
	
	R = (LinkList)malloc(sizeof(Lnode));//new(R)
	R -> data = datium;
	T = P -> next;
	P -> next = R;
	R -> next = T;
	length++;
	return 0;
}


int main()
{
	LinkList head, headB;
	int stat;
	int op;
	int inputi;

	float ipdatium;


	for (;;)
	{

		if (TableC == 0)
		{
			printf("1-创建单链表 0-退出\n");
			setbuf(stdin, NULL);
			scanf("%d", &op);

			switch (op)
			{
				case 1:
						printf("starting initializing , -1 to end\n");
						head = iCreateB(&length);
						TableC++;
						break;
				case 0:
						return 0;
				default:
						break;
			}


		}
		else
		{
			if (TableC == 1)
			{
				printf("\n1-访问特定节点 2-删除特定节点 3-排序（未开放） 4-对表A插入 5-创建第二张单链表 0-退出\n");
				printf("当前表长：[%d]\n>>", length);
				setbuf(stdin, NULL);
				scanf("%d", &op);

				switch (op)
				{
					case 1:
							printf("Please input i\n");
							scanf("%d", &inputi);
							stat = iVisit(head, inputi);
							if (stat == -1)
							{
								printf("Error: -1, unable to find No.%d\n", inputi);
							}
							break;
					case 2:
							printf("Please input i\n");
							scanf("%d", &inputi);
							stat = iDel(head, inputi);
							if (stat == 0)
							{
								length--;
							}
							if (stat == 1)
							{
								printf("Already done!\n");
								break;
							}
							if (stat == -1)
							{
								printf("Error: -1, unable to find No.%d, deletion failure.\n", inputi - 1);
								break;
							}
							if (stat == -2)
							{
								printf("Error: -2, unable to find No.%d, deletion failure.\n", inputi);
								break;
							}

							break;
					case 3:

							break;
					case 4:
							printf("请输入您的数据：\n>>");
							scanf("%f", &ipdatium);
							printf("插入到第几个元素的后面：\n>>");
							scanf("%d", &inputi);
							stat = iInsert(head, inputi , ipdatium);

							break;

					case 5:
							printf("initializing Table B... Input -1 to end...\n");
							headB = iCreateB(&lengthB);
							TableC++;
							break;
					case 0:
						return 0;
					default:
						break;
				}
			}
			else
			{
				printf("\n11-访问表A特定节点 12-删除表A特定节点 13-表A排序（未开放） \n21-访问表B特定节点 22-删除表B特定节点 23-表B排序（未开放）\n4-双表软合并（未开放） \n0-退出\n");
				printf("当前表A表长：[%d]\n当前表B表长：[%d]\n>>", length, lengthB);
				setbuf(stdin, NULL);
				scanf("%d", &op);

				switch (op)
				{
					case 11:
							printf("Please input i\n");
							scanf("%d", &inputi);
							stat = iVisit(head, inputi);
							if (stat == -1)
							{
								printf("Error: -1, unable to find No.%d\n", inputi);
							}
							break;
					case 12:
							printf("Please input i\n");
							scanf("%d", &inputi);
							stat = iDel(head, inputi);
							if (stat == 0)
							{
								length--;
							}
							if (stat == 1)
							{
								printf("Already done!\n");
								break;
							}
							if (stat == -1)
							{
								printf("Error: -1, unable to find No.%d, deletion failure.\n", inputi - 1);
								break;
							}
							if (stat == -2)
							{
								printf("Error: -2, unable to find No.%d, deletion failure.\n", inputi);
								break;
							}
							break;
					case 13:

							break;
					case 21:
							printf("Please input i\n");
							scanf("%d", &inputi);
							stat = iVisit(headB, inputi);
							if (stat == -1)
							{
								printf("Error: -1, unable to find No.%d\n", inputi);
							}
							break;
					case 22:
							printf("Please input i\n");
							scanf("%d", &inputi);
							stat = iDel(headB, inputi);
							if (stat == 0)
							{
								lengthB--;
							}
							if (stat == 1)
							{
								printf("Already done!\n");
								break;
							}
							if (stat == -1)
							{
								printf("Error: -1, unable to find No.%d, deletion failure.\n", inputi - 1);
								break;
							}
							if (stat == -2)
							{
								printf("Error: -2, unable to find No.%d, deletion failure.\n", inputi);
								break;
							}
							break;
					case 23:

							break;
					case 4:
							;
							break;
					case 0:
						return 0;
					default:
						break;
				}
			}
		}


	}


	return 0;
}