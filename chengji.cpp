#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 100000


typedef struct  tagStudent
{
  int n;                    /*编号*/

  int stNum;                 /*学号*/

  char name[10];            /*姓名*/

  int Pcns;                  /*语文成绩*/

  int Pmat;               /*数学成绩*/

  int Pen;                  /*英语成绩*/

  int zuosi;                 /*物理成绩*/

  int PPC;                 /*计算机成绩*/

  float ave;             /*平均成绩*/
} Student;

Student stu[SIZE];
/*录入数据*/
void Student_Input()
{ 
  int i,p;  
  FILE *fp;
  fp=fopen("studentfile.dat","wb");                      
  for(i=0;i<SIZE;i++)
  { 
    printf("\n\r请输入指令序号i(输入i=-1返回),i=",i++);
    scanf("%d",&i);
    if(i==-1|| i ==0)               
    {
      fclose(fp);       
      return;
    }
    else                                      
		{
	  printf("\n\r请输入学号(数字型)(请不要输入0否则无法查询！):");
      scanf("%d",&stu[i].stNum);
      printf("\n\r请输入姓名(字符型):");
      scanf("%s",stu[i].name);
      printf("\n\r请输入语文成绩(0~100):");
      scanf("%d",&stu[i].Pcns);
      printf("\n\r请输入数学成绩(0~100):");
      scanf("%d",&stu[i].Pmat);
      printf("\n\r请输入英语成绩:(0~100)");
      scanf("%d",&stu[i].Pen);
      printf("\n\r请输入物理成绩:(0~100)");
      scanf("%d",&stu[i].zuosi);
      printf("\n\r请输入计算机成绩(0~100):");
      scanf("%d",&stu[i].PPC);
      stu[i].ave=(stu[i].Pcns+stu[i].Pmat+stu[i].Pen+stu[i].zuosi+stu[i].PPC)/5.0;
      stu[i].n=i+1;
      fwrite(&stu[i],sizeof(Student),1,fp);
    }
  }
  fclose(fp);
}

/*输出数据*/
void Student_ListOut()
{
  FILE *fp;
  int i;
  fp=fopen("studentfile.dat","rb");                       
  printf("----------\n");
  printf("    成绩列表\n");
  printf("-----------------------------------------------------------------------\n");
  printf("序号  学号     姓名    语文    数学    英语    物理    计算机    平均\n");
  printf("-----------------------------------------------------------------------\n");
  for(i=0;fread(&stu[i],sizeof(Student),1,fp)==1;i++)
  {
    printf("%d%8d%8s%8d%8d%8d%8d%8d%10.2f\n",stu[i].n,stu[i].stNum,stu[i].name,stu[i].Pcns,
      stu[i].Pmat,stu[i].Pen,stu[i].zuosi,stu[i].PPC,stu[i].ave);
  }
  printf("-----------------------------------------------------------------------\n");
  fclose(fp);
}

/*查找数据*/
void Student_Search()
{
  FILE *fp;
  int i,num;
  fp=fopen("studentfile.dat","rb");    
  rewind(fp);
  printf("请输入要查找的学号:");
  scanf("%d",&num);
  printf("----------\n");
  printf("    查询结果\n");
  printf("-----------------------------------------------------------------------\n");
  printf("序号  学号     姓名    语文    数学    英语    物理    计算机    平均\n");
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

/*增加数据*/
void Student_Add()
{
  int i,s;
  FILE *fp;
  fp=fopen("studentfile.dat","ab+");    
  rewind(fp);
  printf("----------\n");
  printf("      成绩列表\n");
  printf("-----------------------------------------------------------------------\n");
  printf("序号  学号     姓名    语文    数学    英语    物理    计算机    平均\n");
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
    printf("输入指令序号i(输入i=-1返回),i=",i);
    scanf("%d",&i);
    if(i==-1|| i ==0)                                  
    {
      fclose(fp);
      return;
    }
    else
    {
      printf("\n\r请输入学号(数字型):");
      scanf("%d",&stu[i].stNum);
      printf("\n\r请输入姓名(字符型):");
      scanf("%s",stu[i].name);
      printf("\n\r请输入语文成绩(0~100):");
      scanf("%d",&stu[i].Pcns);
      printf("\n\r请输入数学成绩(0~100):");
      scanf("%d",&stu[i].Pmat);
      printf("\n\r请输入英语成绩:(0~100)");
      scanf("%d",&stu[i].Pen);
      printf("\n\r请输入物理成绩:(0~100)");
      scanf("%d",&stu[i].zuosi);
      printf("\n\r请输入计算机成绩(0~100):");
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
/*删除数据*/
void Student_Delete()
{ 
  FILE *fp;
  int i,num,n;
  int total =0;
  int flag=0;    
  fp=fopen("studentfile.dat","rb");
  printf("----------\n");
  printf("      成绩列表\n");
  printf("-----------------------------------------------------------------------\n");
  printf("序号  学号     姓名    语文    数学    英语    物理    计算机    平均\n");
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
  
  printf("请输入要删除学生的学号:");
  scanf("%d",&num);
  for(i=0;i<=SIZE;i++)
    if(stu[i].stNum==num)
    {
      printf("----------\n");
      printf("要删除的学生信息\n");
      printf("-----------------------------------------------------------------------\n");
      printf("序号  学号     姓名    语文    数学    英语    物理    计算机    平均\n");
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
      printf("    输入错误!\n");
      printf("    请返回!\n");
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
    printf("当前成绩列表\n");
    printf("-----------------------------------------------------------------------\n");
    printf("序号  学号     姓名    语文    数学    英语    物理    计算机    平均\n");
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
/*修改数据*/
void Student_Change()
{ 
  FILE *fp;
  int i,num,n;
  int flag=0;    
  printf("请输入要修改学生的学号:");
  scanf("%d",&num);
  for(i=0;i<=SIZE;i++)
    if(stu[i].stNum==num)
    {
      printf("----------\n");
      printf("      成绩列表\n");
      printf("-----------------------------------------------------------------------\n");
      printf("序号  学号     姓名    语文    数学    英语    物理    计算机    平均\n");
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
      printf("    输入错误!\n");
      printf("    请返回!\n");
      printf("----------\n");
      return;
    }
    printf("\n\n\n");  
    fp=fopen("studentfile.dat","rb+");
    fseek(fp,n*sizeof(Student),0);
    printf("\n\r请输入学号(数字型):");
    scanf("%d",&stu[i].stNum);
    printf("\n\r请输入姓名(字符型):");
    scanf("%s",stu[i].name);
    printf("\n\r请输入语文成绩(0~100):");
    scanf("%d",&stu[i].Pcns);
    printf("\n\r请输入数学成绩(0~100):");
    scanf("%d",&stu[i].Pmat);
    printf("\n\r请输入英语成绩:(0~100)");
    scanf("%d",&stu[i].Pen);
    printf("\n\r请输入物理成绩:(0~100)");
    scanf("%d",&stu[i].zuosi);
    printf("\n\r请输入计算机成绩(0~100):");
    scanf("%d",&stu[i].PPC);
    stu[i].ave=(stu[i].Pcns+stu[i].Pmat+stu[i].Pen+stu[i].zuosi+stu[i].PPC)/5.0;
    stu[i].n=i+1;
    fwrite(&stu[i],sizeof(Student),1,fp);
    fclose(fp);
    fp=fopen("studentfile.dat","rb");
    printf("----------\n");
    printf("      成绩列表\n");
    printf("-----------------------------------------------------------------------\n");
    printf("序号  学号     姓名    语文    数学    英语    物理    计算机    平均\n");
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

/*成绩排序*/
void Student_Order()
{
  int i,j,n;
  FILE *fp;
  Student t;
  fp=fopen("studentfile.dat","rb");
  printf("----------\n");
  printf("      成绩列表\n");
  printf("-----------------------------------------------------------------------\n");
  printf("序号  学号     姓名    语文    数学    英语    物理    计算机    平均\n");
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
      printf("      成绩列表\n");
      printf("-----------------------------------------------------------------------\n");
      printf("序号  学号     姓名    语文    数学    英语    物理    计算机    平均\n");
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
/*主函数*/
main()
{
  int n;
  for(;;)
  {

    printf("\n");
    printf("/-------------------------------------------\\\n");
    printf("|                                          |\n");
    printf("|             学生信息管理系统             |\n");
    printf("|                  主菜单                  |\n");
    printf("|                                          |\n");
    printf("|                1.录入数据                |\n");
    printf("|                2.删除数据                |\n");
    printf("|                3.输出数据                |\n");
    printf("|                4.查找数据                |\n");
    printf("|                5.增加数据                |\n");
    printf("|                6.修改数据                |\n");
    printf("|                7.成绩排序                |\n");  
    printf("|                8.退出系统                |\n"); 
    printf("|                                          |\n");
    printf("--------------------------------------------\n\n");
    printf("请输入选择项(1-8):");
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
	  printf("(                            操作结束!                                 )\n");
      printf("(                           请按任意键                                 )\n");
      printf("(                               退出!                                  )\n");
      printf("(                                                                      )\n");
      printf("----------------------------------------------------------------------\n");
      break;
    }
  }
}
