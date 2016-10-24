#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 100000


typedef struct  tagStudent
{
  int n;                    /*���*/

  int stNum;                 /*ѧ��*/

  char name[10];            /*����*/

  int Pcns;                  /*���ĳɼ�*/

  int Pmat;               /*��ѧ�ɼ�*/

  int Pen;                  /*Ӣ��ɼ�*/

  int zuosi;                 /*����ɼ�*/

  int PPC;                 /*������ɼ�*/

  float ave;             /*ƽ���ɼ�*/
} Student;

Student stu[SIZE];
/*¼������*/
void Student_Input()
{ 
  int i,p;  
  FILE *fp;
  fp=fopen("studentfile.dat","wb");                      
  for(i=0;i<SIZE;i++)
  { 
    printf("\n\r������ָ�����i(����i=-1����),i=",i++);
    scanf("%d",&i);
    if(i==-1|| i ==0)               
    {
      fclose(fp);       
      return;
    }
    else                                      
		{
	  printf("\n\r������ѧ��(������)(�벻Ҫ����0�����޷���ѯ��):");
      scanf("%d",&stu[i].stNum);
      printf("\n\r����������(�ַ���):");
      scanf("%s",stu[i].name);
      printf("\n\r���������ĳɼ�(0~100):");
      scanf("%d",&stu[i].Pcns);
      printf("\n\r��������ѧ�ɼ�(0~100):");
      scanf("%d",&stu[i].Pmat);
      printf("\n\r������Ӣ��ɼ�:(0~100)");
      scanf("%d",&stu[i].Pen);
      printf("\n\r����������ɼ�:(0~100)");
      scanf("%d",&stu[i].zuosi);
      printf("\n\r�����������ɼ�(0~100):");
      scanf("%d",&stu[i].PPC);
      stu[i].ave=(stu[i].Pcns+stu[i].Pmat+stu[i].Pen+stu[i].zuosi+stu[i].PPC)/5.0;
      stu[i].n=i+1;
      fwrite(&stu[i],sizeof(Student),1,fp);
    }
  }
  fclose(fp);
}

/*�������*/
void Student_ListOut()
{
  FILE *fp;
  int i;
  fp=fopen("studentfile.dat","rb");                       
  printf("----------\n");
  printf("    �ɼ��б�\n");
  printf("-----------------------------------------------------------------------\n");
  printf("���  ѧ��     ����    ����    ��ѧ    Ӣ��    ����    �����    ƽ��\n");
  printf("-----------------------------------------------------------------------\n");
  for(i=0;fread(&stu[i],sizeof(Student),1,fp)==1;i++)
  {
    printf("%d%8d%8s%8d%8d%8d%8d%8d%10.2f\n",stu[i].n,stu[i].stNum,stu[i].name,stu[i].Pcns,
      stu[i].Pmat,stu[i].Pen,stu[i].zuosi,stu[i].PPC,stu[i].ave);
  }
  printf("-----------------------------------------------------------------------\n");
  fclose(fp);
}

/*��������*/
void Student_Search()
{
  FILE *fp;
  int i,num;
  fp=fopen("studentfile.dat","rb");    
  rewind(fp);
  printf("������Ҫ���ҵ�ѧ��:");
  scanf("%d",&num);
  printf("----------\n");
  printf("    ��ѯ���\n");
  printf("-----------------------------------------------------------------------\n");
  printf("���  ѧ��     ����    ����    ��ѧ    Ӣ��    ����    �����    ƽ��\n");
  printf("-----------------------------------------------------------------------\n");
  for(i=0;i<=SIZE;i++)
    if(stu[i].stNum==0)
	{
		printf("Error!\n");
		break;
	}
	else 
	{
    if(stu[i].stNum==num)
    {
      printf("%d%8d%8s%8d%8d%8d%8d%8d%10.2f\n",stu[i].n,stu[i].stNum,stu[i].name,stu[i].Pcns,
        stu[i].Pmat,stu[i].Pen,stu[i].zuosi,stu[i].PPC,stu[i].ave);
    }
    printf("-----------------------------------------------------------------------\n");
    printf("----------\n");
	}
    fclose(fp);
}

/*��������*/
void Student_Add()
{
  int i,s;
  FILE *fp;
  fp=fopen("studentfile.dat","ab+");    
  rewind(fp);
  printf("----------\n");
  printf("      �ɼ��б�\n");
  printf("-----------------------------------------------------------------------\n");
  printf("���  ѧ��     ����    ����    ��ѧ    Ӣ��    ����    �����    ƽ��\n");
  printf("-----------------------------------------------------------------------\n");
  for(i=0;fread(&stu[i],sizeof(Student),1,fp)==1;i++)
  {
    printf("%d%8d%8s%8d%8d%8d%8d%8d%10.2f\n",stu[i].n,stu[i].stNum,stu[i].name,stu[i].Pcns,
      stu[i].Pmat,stu[i].Pen,stu[i].zuosi,stu[i].PPC,stu[i].ave);
  }
  printf("----------\n");
  s=i;
  for(i=s;i<SIZE;i++)
  {
    printf("����ָ�����i(����i=-1����),i=",i);
    scanf("%d",&i);
    if(i==-1|| i ==0)                                  
    {
      fclose(fp);
      return;
    }
    else
    {
      printf("\n\r������ѧ��(������):");
      scanf("%d",&stu[i].stNum);
      printf("\n\r����������(�ַ���):");
      scanf("%s",stu[i].name);
      printf("\n\r���������ĳɼ�(0~100):");
      scanf("%d",&stu[i].Pcns);
      printf("\n\r��������ѧ�ɼ�(0~100):");
      scanf("%d",&stu[i].Pmat);
      printf("\n\r������Ӣ��ɼ�:(0~100)");
      scanf("%d",&stu[i].Pen);
      printf("\n\r����������ɼ�:(0~100)");
      scanf("%d",&stu[i].zuosi);
      printf("\n\r�����������ɼ�(0~100):");
      scanf("%d",&stu[i].PPC);
      stu[i].ave=(stu[i].Pcns+stu[i].Pmat+stu[i].Pen+stu[i].zuosi+stu[i].PPC)/5.0;
      stu[i].n=i+1;
      fwrite(&stu[i],sizeof(Student),1,fp);
      printf("%d%8d%8s%8d%8d%8d%8d%8d%10.2f\n",stu[i].n,stu[i].stNum,stu[i].name,stu[i].Pcns,
        stu[i].Pmat,stu[i].Pen,stu[i].zuosi,stu[i].PPC,stu[i].ave);
    }
  }
  fclose(fp);
}
/*ɾ������*/
void Student_Delete()
{ 
  FILE *fp;
  int i,num,n;
  int total =0;
  int flag=0;    
  fp=fopen("studentfile.dat","rb");
  printf("----------\n");
  printf("      �ɼ��б�\n");
  printf("-----------------------------------------------------------------------\n");
  printf("���  ѧ��     ����    ����    ��ѧ    Ӣ��    ����    �����    ƽ��\n");
  printf("-----------------------------------------------------------------------\n");
  for(i=0;fread(&stu[i],sizeof(Student),1,fp)==1;i++)
  {
    printf("%d%8d%8s%8d%8d%8d%8d%8d%10.2f\n",stu[i].n,stu[i].stNum,stu[i].name,stu[i].Pcns,
      stu[i].Pmat,stu[i].Pen,stu[i].zuosi,stu[i].PPC,stu[i].ave);
  }
  printf("-----------------------------------------------------------------------\n");
  printf("----------\n");
  fclose(fp);
  
  total = i-1;
  
  printf("������Ҫɾ��ѧ����ѧ��:");
  scanf("%d",&num);
  for(i=0;i<=SIZE;i++)
    if(stu[i].stNum==num)
    {
      printf("----------\n");
      printf("Ҫɾ����ѧ����Ϣ\n");
      printf("-----------------------------------------------------------------------\n");
      printf("���  ѧ��     ����    ����    ��ѧ    Ӣ��    ����    �����    ƽ��\n");
      printf("-----------------------------------------------------------------------\n");
      printf("%d%8d%8s%8d%8d%8d%8d%8d%10.2f\n",stu[i].n,stu[i].stNum,stu[i].name,stu[i].Pcns,
        stu[i].Pmat,stu[i].Pen,stu[i].zuosi,stu[i].PPC,stu[i].ave);
      printf("-----------------------------------------------------------------------\n");
      printf("----------\n");
      n=i+1;
      flag=1;
      break;
    }
  if(flag==0)
    {
      printf("----------\n");
      printf("    �������!\n");
      printf("    �뷵��!\n");
      printf("----------\n");
      return;
    }
    printf("\n\n\n");  
    for(i=n;i<=total;i++)
    {
      memcpy(&stu[i-1],&stu[i],sizeof(Student));
    }
    memset(&stu[total],0,sizeof(Student));
    
    fp=fopen("studentfile.dat","wb+");
    for(i=0;i<total;i++)
    {
      fwrite(&stu[i],sizeof(Student),1,fp);
    }    
    fclose(fp);
    
    fp=fopen("studentfile.dat","rb");
    printf("----------\n");
    printf("��ǰ�ɼ��б�\n");
    printf("-----------------------------------------------------------------------\n");
    printf("���  ѧ��     ����    ����    ��ѧ    Ӣ��    ����    �����    ƽ��\n");
    printf("-----------------------------------------------------------------------\n");
    for(i=0;fread(&stu[i],sizeof(Student),1,fp)==1;i++)
    {
      printf("%d%8d%8s%8d%8d%8d%8d%8d%10.2f\n",stu[i].n,stu[i].stNum,stu[i].name,stu[i].Pcns,
        stu[i].Pmat,stu[i].Pen,stu[i].zuosi,stu[i].PPC,stu[i].ave);
    }
    printf("-----------------------------------------------------------------------\n");
    printf("----------\n");
    fclose(fp);
}
/*�޸�����*/
void Student_Change()
{ 
  FILE *fp;
  int i,num,n;
  int flag=0;    
  printf("������Ҫ�޸�ѧ����ѧ��:");
  scanf("%d",&num);
  for(i=0;i<=SIZE;i++)
    if(stu[i].stNum==num)
    {
      printf("----------\n");
      printf("      �ɼ��б�\n");
      printf("-----------------------------------------------------------------------\n");
      printf("���  ѧ��     ����    ����    ��ѧ    Ӣ��    ����    �����    ƽ��\n");
      printf("-----------------------------------------------------------------------\n");
      printf("%d%8d%8s%8d%8d%8d%8d%8d%10.2f\n",stu[i].n,stu[i].stNum,stu[i].name,stu[i].Pcns,
        stu[i].Pmat,stu[i].Pen,stu[i].zuosi,stu[i].PPC,stu[i].ave);
      printf("-----------------------------------------------------------------------\n");
      printf("----------\n");
      n=i+1;
      flag=1;
      break;
    }
    if(flag==0)
    {
      printf("----------\n");
      printf("    �������!\n");
      printf("    �뷵��!\n");
      printf("----------\n");
      return;
    }
    printf("\n\n\n");  
    fp=fopen("studentfile.dat","rb+");
    fseek(fp,n*sizeof(Student),0);
    printf("\n\r������ѧ��(������):");
    scanf("%d",&stu[i].stNum);
    printf("\n\r����������(�ַ���):");
    scanf("%s",stu[i].name);
    printf("\n\r���������ĳɼ�(0~100):");
    scanf("%d",&stu[i].Pcns);
    printf("\n\r��������ѧ�ɼ�(0~100):");
    scanf("%d",&stu[i].Pmat);
    printf("\n\r������Ӣ��ɼ�:(0~100)");
    scanf("%d",&stu[i].Pen);
    printf("\n\r����������ɼ�:(0~100)");
    scanf("%d",&stu[i].zuosi);
    printf("\n\r�����������ɼ�(0~100):");
    scanf("%d",&stu[i].PPC);
    stu[i].ave=(stu[i].Pcns+stu[i].Pmat+stu[i].Pen+stu[i].zuosi+stu[i].PPC)/5.0;
    stu[i].n=i+1;
    fwrite(&stu[i],sizeof(Student),1,fp);
    fclose(fp);
    fp=fopen("studentfile.dat","rb");
    printf("----------\n");
    printf("      �ɼ��б�\n");
    printf("-----------------------------------------------------------------------\n");
    printf("���  ѧ��     ����    ����    ��ѧ    Ӣ��    ����    �����    ƽ��\n");
    printf("-----------------------------------------------------------------------\n");
    for(i=0;fread(&stu[i],sizeof(Student),1,fp)==1;i++)
    {
      printf("%d%8d%8s%8d%8d%8d%8d%8d%10.2f\n",stu[i].n,stu[i].stNum,stu[i].name,stu[i].Pcns,
        stu[i].Pmat,stu[i].Pen,stu[i].zuosi,stu[i].PPC,stu[i].ave);
    }
    printf("-----------------------------------------------------------------------\n");
    printf("----------\n");
    fclose(fp);
}

/*�ɼ�����*/
void Student_Order()
{
  int i,j,n;
  FILE *fp;
  Student t;
  fp=fopen("studentfile.dat","rb");
  printf("----------\n");
  printf("      �ɼ��б�\n");
  printf("-----------------------------------------------------------------------\n");
  printf("���  ѧ��     ����    ����    ��ѧ    Ӣ��    ����    �����    ƽ��\n");
  printf("-----------------------------------------------------------------------\n");
  for(i=0;fread(&stu[i],sizeof(Student),1,fp)==1;i++)
  {
    printf("%d%8d%8s%8d%8d%8d%8d%8d%10.2f\n",stu[i].n,stu[i].stNum,stu[i].name,stu[i].Pcns,
      stu[i].Pmat,stu[i].Pen,stu[i].zuosi,stu[i].PPC,stu[i].ave);
  }
  printf("-----------------------------------------------------------------------\n");
  printf("----------\n");
  fclose(fp);
  n=i;
  for(i=0;i<n;i++)
    for(j=i+1;j<n;j++)
      if(stu[i].ave<stu[j].ave)
      {
        t=stu[i];
        stu[i]=stu[j];
        stu[j]=t;
      }
      fp=fopen("studentfile.dats","wb");
      printf("\n\n\n");
      printf("----------\n");
      printf("      �ɼ��б�\n");
      printf("-----------------------------------------------------------------------\n");
      printf("���  ѧ��     ����    ����    ��ѧ    Ӣ��    ����    �����    ƽ��\n");
      printf("-----------------------------------------------------------------------\n");
      for(i=0;i<n;i++)
      {
        printf("%d%8d%8s%8d%8d%8d%8d%8d%10.2f\n",stu[i].n,stu[i].stNum,stu[i].name,stu[i].Pcns,
          stu[i].Pmat,stu[i].Pen,stu[i].zuosi,stu[i].PPC,stu[i].ave);
        fwrite(&stu[i],sizeof(Student),1,fp);
      }
      printf("----------\n");
      fclose(fp);
}
/*������*/
main()
{
  int n;
  for(;;)
  {

    printf("\n");
    printf("/-------------------------------------------\\\n");
    printf("|                                          |\n");
    printf("|             ѧ����Ϣ����ϵͳ             |\n");
    printf("|                  ���˵�                  |\n");
    printf("|                                          |\n");
    printf("|                1.¼������                |\n");
    printf("|                2.ɾ������                |\n");
    printf("|                3.�������                |\n");
    printf("|                4.��������                |\n");
    printf("|                5.��������                |\n");
    printf("|                6.�޸�����                |\n");
    printf("|                7.�ɼ�����                |\n");  
    printf("|                8.�˳�ϵͳ                |\n"); 
    printf("|                                          |\n");
    printf("--------------------------------------------\n\n");
    printf("������ѡ����(1-8):");
    scanf("%d",&n);
    printf("\n\n\n\n");
    if(n>0&&n<=8)
    {
      switch(n)
      {
      case 1:Student_Input();break;
      case 2:Student_Delete();break;
      case 3:Student_ListOut();break;
      case 4:Student_Search();break;
      case 5:Student_Add();break;
      case 6:Student_Change();break;
      case 7:Student_Order();break;  
      case 8:exit(0);  
      }
    }
    else 
    {
      printf("----------------------------------------------------------------------\n");
      printf("(                                                                      )\n");
	  printf("(                            ��������!                                 )\n");
      printf("(                           �밴�����                                 )\n");
      printf("(                               �˳�!                                  )\n");
      printf("(                                                                      )\n");
      printf("----------------------------------------------------------------------\n");
      break;
    }
  }
}
