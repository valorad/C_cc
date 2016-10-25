#include <stdio.h>
#include <windows.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <Winreg.h>
#include <WINERROR.h>

#define BOOL int
#define TRUE 1
#define FALSE 0
#define ver 0.90

int seccheck(void);
void updatecheck(void);
void suoyaoK(void);
void zengsongK(void);
long restor(void);
long restst(void);
long restup(void);


int main()
{
	int keyent;
	int flag = 0; // an quan jian cha
	long res;
//	int i;

	system("color 97");

	printf("\t\t--------Billy-CDK Recovery Mode v");
	printf("%.2lf", ver);
	printf("--------\n\n");

	system("pause");
	printf("- 欢迎来到Billy CD-Key\n");
	printf("- 版本：Billy CD-Key 家庭豪华苹果版\n");
	printf("- 当前主题风格：CM Recovery Mode\n");
	system("pause");

	updatecheck();

	for (;;)
	{
		if (flag == 0) // jin ru an quan jian cha
		{
			printf("\n！！！您似乎是第一次打开这个程序，为了验证您是否真的是Billy-CDK高级土豪会员\n，请配合我们进行安全检查，");
			printf("Billy-CDK谢谢您的理解与支持！\n");
			system("pause");
			flag = seccheck();
		}
		else // an quan jian cha zuo guo
		{
			if (flag == 2) // an quan jian cha mei guo
			{
				printf("对不起，您没有通过安全检查！我们现在对您的高级土豪会员身份起严重的怀疑←_←！~~~\n（请重启本程序重新答题~~感谢您使用本程序！~~~~）\n");
				system("pause");
				return 0;
			}
			else // an quan jian cha tong guo
			{
				printf("******************************************************\n");
				printf("******************************************************\n");
				printf("*****************-----1 -索要CDK-------***************\n");
				printf("*****************-----2 -赠送CDK-------***************\n");
				printf("*****************-----3 -（未开放）找回CDK-------*****\n");
				printf("*****************-----4 -（管理员）重启Origin-----****\n");
				printf("*****************-----5 -（管理员）重启Steam-----*****\n");
				printf("*****************-----6 -（管理员）重启Uplay-----*****\n");
				printf("******************************************************\n");
				printf("******************************************************\n");
				printf("******************----0 -退出----------***************\n");

				printf(">>");
				scanf("%d", &keyent);
				if (keyent == 0)
				{
					break; // shu 0 jiu tui chu
				}

				if (keyent == 1)
				{
					system("cls");
					printf("\t\t--------Billy-CDK Recovery Mode v");
					printf("%.2lf", ver);
					printf("--------\n\n");
					suoyaoK();
				}

				if (keyent == 2)
				{
					system("cls");
					printf("\t\t--------Billy-CDK Recovery Mode v");
					printf("%.2lf", ver);
					printf("--------\n\n");
					zengsongK();
				}
				if (keyent == 3)
				{
					system("cls");
					printf("\t\t--------Billy-CDK Recovery Mode v");
					printf("%.2lf", ver);
					printf("--------\n\n");
					;
				}
				if (keyent == 4)
				{
					system("cls");
					printf("\t\t--------Billy-CDK Recovery Mode v");
					printf("%.2lf", ver);
					printf("--------\n\n");
					restor();
				}

				if (keyent == 5)
				{
					system("cls");
					printf("\t\t--------Billy-CDK Recovery Mode v");
					printf("%.2lf", ver);
					printf("--------\n\n");
					res = restst();
				}

				if (keyent == 6)
				{
					system("cls");
					printf("\t\t--------Billy-CDK Recovery Mode v");
					printf("%.2lf", ver);
					printf("--------\n\n");
					res = restup();
				}

			}

		}

	}

	printf("- 感谢您使用本程序。\n");

	system("pause");
	return 0;
}

//-------------------------------------------------------an quan jian cha
int seccheck(void)
{
//	

	int t; // time waited
//	int num;
	char name[20];
	char yzm[30] = "MSqvBillyGeiWoCDK10010"; // yzm
	char nameans[6] = "billy"; // zheng que de ming zi
	char ch;

	BOOL f1 = FALSE;
	BOOL f2 = FALSE;
	BOOL f3 = FALSE;
	BOOL f4 = FALSE;
	BOOL f5 = FALSE;
	BOOL f6 = FALSE;

	printf("\n---------------------------------\n");
	printf("| 正在在线检测题目完整性。。。|");
	printf("\n---------------------------------\n");
	printf("目标：正确回答以下所有问题才可以通过安全检查。\n通过安全检查才可以进行本程序的相关操作。\n\n");

	srand((int)time(0));
	t = rand() % 2000 + 2000 ;
	Sleep(t);
	printf("\n ---警告！无法连接到服务器！\n");
	printf("题目检测通过，即将进入答题。。。\n\n");
	Sleep(1000);

//>>>>>>> No.1
	printf("##1. Billy是安卓粉还是苹果黑\n");
	printf("A.是卓粉，但不是果黑\tB.是果黑但不是卓粉\nC.既是卓粉又是果黑\tD.既不是安卓粉也不是果黑\n");
	setbuf(stdin, NULL);
	printf(">>");
	scanf("%c", &ch);
	if (ch == 'C' || ch == 'c')
	{
		f1 = TRUE;
//		printf("duide!\n");
	}

//>>>>>>> No.2
	printf("##2. 请输入下列验证码：\n");
	printf("%s\n", yzm);
	fflush(stdin);
	printf(">>");
	scanf("%s", name);
	if (strcmp(name, yzm) == 0)
	{
		f2 = TRUE;
//		printf("duide!\n");
	}
//	*name = '\0';
	

//>>>>>>> No.3
	printf("##3. 截止2014年7月17日，Billy总共给了Steve_____个CDK\n");
	printf("A.7个\tB.8个\tC.9个\tD.10个\n");
	setbuf(stdin, NULL);
	printf(">>");
	scanf("%c", &ch);
	if (ch == 'A' || ch == 'a')
	{
		f3 = TRUE;
//		printf("duide!\n");
	}

//>>>>>>> No.4
	printf("##4. 目前Billy的Steam账号昵称是_____\n");
	setbuf(stdin, NULL);
	printf(">>");
	scanf("%s", name);
	if (strcmp(nameans, name) == 0)
	{
		f4 = TRUE;
//		printf("duide!\n");
	}

//>>>>>>> No.5
	printf("##5. Billy和Steve玩的最多的Steam游戏分别是_____和_____\n");
	printf("A.求生之路2， 骑马与砍杀 战团\tB.传送门2， 刺客信条4\nC.刀塔2， 上古卷轴5\tD.火炬之光2， 火炬之光2\n");
	setbuf(stdin, NULL);
	printf(">>");
	scanf("%c", &ch);
	if (ch == 'C' || ch == 'c')
	{
		f5 = TRUE;
//		printf("duide!\n");
	}

//>>>>>>> No.6
	printf("##6. Steve给过Billy CDK吗？\n");
	printf("A.给过\tB.没给过\n");
	setbuf(stdin, NULL);
	printf(">>");
	scanf("%c", &ch);
	if (ch == 'A' || ch == 'a')
	{
		f6 = TRUE;
//		printf("duide!\n");
	}



	if (f1 && f2 && f3 && f4 && f5 && f6)
	{
		printf("！！！恭喜您，安全检查已通过！正在加载主菜单。。。。\n\n");
		return 1;
	}
	else
	{
		return 2;
	} 
 
	return 1;

}
//---------------------------------------------------------jian cha geng xin
void updatecheck(void)
{
	char ch;
	int t; // time waited

	printf("请问您是否希望检查一下更新？ Y/N\n");
	printf(">>");
	scanf("%c", &ch);

	if (ch == 'Y' || ch == 'y')
	{
		printf("真听话，我就是想叫你更新~~~\n\n");
	}
	else
	{
		if (ch == 'N' || ch == 'n')
		{
			printf("不行！必须给我检查更新！(ノ=Д=)ノ┻━┻\n\n");
		}
		else
		{
			printf("哎呀，笨死了，yes和no都输不来~~算了，反正都要更新，我只是通知你一下~~~~\n\n");
		}
	}
	printf("- 查找更新中，正在连接Billy-CDK服务器。。。\n");  // ! she ge zi dong geng xin

	srand((int)time(0));
	t = rand() % 2000 + 2000 ;

	Sleep(t);
	printf("- 警告！！！无法连接到升级服务器，您可能无法成功进行CDK操作！ \n");

	system("pause");
}

//-------------------------------------------------------1- suo yao K
void suoyaoK(void)
{
	int i;
	char ch;
	int stat[2] = {1};
	char game[128] = {'\0'};

	printf("\n你确定要找Billy-CDK索要您的CDK吗？请注意这个操作不能undone！！！\n\n\n");

	printf("----1--不，我不想找Billy-CDK要CDK！\n");
	printf("----2--不，我不想找Billy-CDK要CDK！\n");
	printf("----3--不，我不想找Billy-CDK要CDK！\n");
	printf("----4--不，我不想找Billy-CDK要CDK！\n");
	printf("----5--不，我不想找Billy-CDK要CDK！\n");
	printf("----6--不，我不想找Billy-CDK要CDK！\n");
	printf("----7--是的，我希望找Billy-CDK要CDK！\n");
	printf("----8--不，我不想找Billy-CDK要CDK！\n");
	printf("----9--不，我不想找Billy-CDK要CDK！\n");
	printf("----0--不，我不想找Billy-CDK要CDK！\n");
	setbuf(stdin, NULL);
	printf(">>");
	scanf("%d", &i);

	if (i == 7)
	{
		printf("好的，请问Billy是否正在观看这段视频？ Y/N \n\n");
		setbuf(stdin, NULL);
		printf(">>");
		scanf("%c", &ch);
		if (ch == 'N' || ch == 'n')
		{
			stat[0] = 0; // bu zai kan
			printf("好的，请问您希望通过何种方式向Billy-CDK索要CDK？\n\n");
			printf("----1-电话联系\n");
			printf("----2-QQ索要\n");
			printf("----3-Origin客服耍赖\n");
			setbuf(stdin, NULL);
			printf(">>");
			scanf("%d", &stat[1]);
		}

		printf("\n好的，您想要什么游戏的CDK？。。。 \n\n");
		printf(">>");
		setbuf(stdin, NULL);
		gets(game);
			
		printf("好的，您将使用");

		if (stat[0] == 0)
		{
			switch (stat[1])
			{
				case 1:
					printf(" 电话联系 ");
					break;
				case 2:
					printf(" QQ索要 ");
					break;
				case 3:
					printf(" Origin客服耍赖 ");
					break;
				default:
					printf(" 某种未知 ");
			}
		}
		else
		{
			printf(" 视频告诉 ");
		}
		printf("的方式告诉Billy你想要 ");
		printf("%s ", game);
		printf("的CDK\n");

		system("pause");
		
		if (stat[0] == 0)
		{
			printf("******************************************************\n");
			printf("******************************************************\n");
			printf("******************************************************\n");
			printf("******************************************************\n");
			printf("******************************************************\n");
			switch (stat[1])
			{
				case 1:
					printf("请拨打Billy-CDK的电话 184****9552 （移动） 或者 138****9077 （吕先生）当面索要CDK~~~需要帮您打开Skype吗？算了你肯定没装。。。能不能成功看你咯~~~\n");
					break;
				case 2:
					printf("请加BillyCDK的QQ ：不要开枪啊厂长是我某六零拜拜拜拜，通过好友验证请求之后方可让对方给你CDK\n");
					break;
				case 3:
					printf("正在为您连接Origin客服。。。。请稍后。。\n");
					printf("可是和客服妹子飚英语与找BillyCDK索要CD-K有啥关系吗⊙▽⊙\n");
					ShellExecute(0, "open", "C:\\Program Files\\Internet Explorer\\iexplore.exe", "http://help.ea.com/en/contact-us/new/?product=origin&platform=pc&category=codes", NULL, SW_SHOW);
					break;
				default:
					printf("对不起，其他索要方式我们暂不支持！谢谢。\n");
			}
		}
		else
		{
			printf("\n正在看这段视频的Billy，我想要 ");
			printf("%s", game);
			printf("的CDK，好不好嘛！好不好嘛！好不好嘛！好不好嘛！就 ");
			printf("%s", game);
			printf("的CDK，好不好嘛！好不好嘛！好不好嘛！好不好嘛！好不好嘛！好不好嘛！好不好嘛！好不好嘛！好不好嘛！好不好嘛！好不好嘛！好不好嘛！好不好嘛！好不好嘛！好不好嘛！好不好嘛！好不好嘛！好不好嘛！好不好嘛！好不好嘛！好不好嘛！\n\n");
			printf("哔~~~发送完毕！\n");
		}
	}

	system("pause");
	printf("\n\n操作结束，正在返回主菜单。。。\n");

}
//-------------------------------------------------------2- zeng song K
void zengsongK(void)
{
	int i;
	char ch;
	int stat[2] = {1};
	char game[128] = {'\0'};
	int t;
	char cdk[50] = {'\0'};
	int num = 0;
	int Gpan = 0;

	printf("\n你确定要赠送Billy CDK吗？请注意一旦你赠送了CDK，您将失去这枚CDK！\n\n\n");

	printf("----1--不，我的库存很紧\n");
	printf("----2--不，我没钱了！\n");
	printf("----3--不，我开N项属性修改器被封号了！\n");
	printf("----4--不，我上次已经请过Billy吃肯德基了！\n");
	printf("----5--不，我编这个程序已经累死了！\n");
	printf("----6--是的，我思索已久，下定决心，要赠送Billy我的独家CDK！\n");
	printf("----7--不，我的安卓小手机没电了！\n");
	printf("----8--不，我的苹果越狱失败了我很伤心！\n");
	printf("----9--不，我的电脑温度过高鲁大娘正在报警！\n");
	printf("----0--不，我觉得吕先生正在后面看我！\n");
	setbuf(stdin, NULL);
	printf(">>");
	scanf("%d", &i);

	if (i == 6)
	{
		printf("好的，请问Billy是否正在使用（或者观看他人使用）这个软件？ Y/N \n\n");
		setbuf(stdin, NULL);
		printf(">>");
		scanf("%c", &ch);
		if (ch == 'N' || ch == 'n')
		{
			stat[0] = 0; // bu zai kan
			printf("好的，请问您希望通过何种方式赠送Billy CDK？\n\n");
			printf("----1-电话联系\n");
			printf("----2-QQ赠送\n");
			printf("----3-让Steam的G胖请\n");
			setbuf(stdin, NULL);
			printf(">>");
			scanf("%d", &stat[1]);
		}

		printf("\n好的，您想要赠送什么游戏的CDK？。。。 \n\n");
		printf(">>");
		setbuf(stdin, NULL);
		gets(game);
			
		printf("好的，您将使用");

		if (stat[0] == 0)
		{
			switch (stat[1])
			{
				case 1:
					printf(" 电话联系 ");
					break;
				case 2:
					printf(" QQ赠送 ");
					break;
				case 3:
					printf(" 让Steam的G胖请 ");
					Gpan = 1;
					break;
				default:
					printf(" 某种未知 ");
			}
		}
		else
		{
			printf(" 视频告诉 ");
		}
		printf("的方式告诉Billy你想要赠送 ");
		printf("%s ", game);
		printf("的CDK\n");

		system("pause");

		if (Gpan == 0)
		{
			printf("正在获得CDK，请稍后。。。。\n");
		}
		else
		{
			printf("正在连接G胖，等待对方接听。。。。。\n");
		}
		
		while (num != 15)
		{
			srand((int)time(0) + num);
			t = rand() % 61 + 30 ;
			if ((48 <= t && t <= 57) || (65 <= t && t <= 90))
			{
				cdk[num] = (char)t;
				num++;
			}
		}

	
		if (stat[0] == 0)
		{
			printf("******************************************************\n");
			printf("******************************************************\n");
			printf("******************************************************\n");
			printf("******************************************************\n");
			printf("******************************************************\n");
			switch (stat[1])
			{
				case 1:
					printf("您的游戏 %s 的CDK 是 %s\n", game, cdk);
					printf("请拨打Billy-CDK的电话 184****9552 （移动） 或者 138****9077 （吕先生），告诉他们您的CDK。~~~需要帮您打开Skype吗？算了你肯定没装。。。\n");
					break;
				case 2:
					printf("您的游戏 %s 的CDK 是 %s\n", game, cdk);
					printf("请让BillyCDK加您的QQ，或您加BillyCDK的QQ ：不要开枪啊厂长是我某六零拜拜拜拜，通过好友验证请求之后方可向对方展示你的CDK\n");
					break;
				case 3:
					printf("G胖表示，他太忙了，你自己先买个cdk请他吧\n");
					break;
				default:
					printf("对不起，其他赠送方式我们暂不支持！谢谢。\n");
			}
		}
		else
		{
			printf("\n正在看我玩这个软件的Billy，我。。。你知道的 ");
			printf("%s", game);
			printf("的CDK嘛。。。虽然不是那么的贵重。但是，重点是这个游戏非常地好玩。。。喏， 这是给你的K：   %s   \n最近我也不知道为啥就是很想请你 ", cdk);
			printf("%s", game);
			printf("的CDK，还有我觉得，CDK这种东西呢，虽然就是一串毫无意义的英文字母数字，但是表达的感情确实很多的~~~\n\n");
			printf("哔~~~发送完毕！\n\n\n");
		}
	}

	system("pause");
	printf("\n\n操作结束，正在返回主菜单。。。\n");

}
//---------------------------------------------------------restart origin
long restor(void)
{
	HKEY hKey; 
	long retVal; 
	char SubKey[512]; 
	unsigned long type = REG_EXPAND_SZ;
	unsigned char buff[512];
	unsigned long len;
	int i;

	printf("\n你确定要重启Origin吗？请注意操作一旦开始就无法停止！！！\n");
	printf("\n---警告！重启Origin后极有可能需要重新登录！---\n\n\n");



	printf("----1--是，我太想重启Origin了！！！\n");
	printf("----2--是，我太想重启Origin了！！！\n");
	printf("----3--是，我太想重启Origin了！！！\n");
	printf("----4--是，我太想重启Origin了！！！\n");
	printf("----5--是，我太想重启Origin了！！！\n");
	printf("----6--是，我太想重启Origin了！！！\n");
	printf("----7--是，我太想重启Origin了！！！\n");
	printf("----8--是，我太想重启Origin了！！！\n");
	printf("----9--是，我太想重启Origin了！！！\n");
	printf("----0--不，重启Origin对我来说代价过高！！！\n");
	setbuf(stdin, NULL);
	printf(">>");
	scanf("%d", &i);

	if (i != 0)
	{
		printf("\n\n正在重启Origin，请稍后。。。\n");
		hKey = HKEY_LOCAL_MACHINE;
		strcpy(SubKey, "SOFTWARE\\Wow6432Node\\Electronic Arts\\EADM"); 

		retVal = RegOpenKeyEx(HKEY_LOCAL_MACHINE, (LPCTSTR) SubKey, 0, KEY_ALL_ACCESS, &hKey);

		if(retVal == ERROR_SUCCESS)
		{
			RegQueryValueEx(hKey,"ClientPath", NULL, &type, buff, &len);

			system("taskkill /f /im Origin.exe /t");
			ShellExecuteA(NULL, "open", buff, NULL, NULL, SW_SHOWNORMAL );
			RegCloseKey(hKey); 
			return 11;
		}

		MessageBox(NULL,TEXT("不好意思呀~~~我找不到你的Origin！安全起见不可以进行此操作。。。"),TEXT("警告！"),MB_OK|MB_ICONWARNING);
		RegCloseKey(hKey); 
		return 10;
	}

	return 12;

}

//---------------------------------------------------------restart steam
long restst(void)
{
	HKEY hKey; 
	long retVal; 
	char SubKey[512]; 
	unsigned long type = REG_EXPAND_SZ;
	unsigned char buff[512];
	unsigned long len;
	char stmname[20] = "\\Steam.exe";
	int i;

	printf("\n你确定要重启Steam吗？请注意操作一旦开始就无法停止！！！\n\n\n");

	printf("----1--是，我太想重启Steam了！！！\n");
	printf("----2--是，我太想重启Steam了！！！\n");
	printf("----3--是，我太想重启Steam了！！！\n");
	printf("----4--是，我太想重启Steam了！！！\n");
	printf("----5--不，重启Steam对我来说代价过高！！！\n");
	printf("----6--是，我太想重启Steam了！！！\n");
	printf("----7--是，我太想重启Steam了！！！\n");
	printf("----8--是，我太想重启Steam了！！！\n");
	printf("----9--是，我太想重启Steam了！！！\n");
	printf("----0--是，我太想重启Steam了！！！\n");
	setbuf(stdin, NULL);
	printf(">>");
	scanf("%d", &i);

	if (i != 5)
	{
		printf("\n\n正在重启Steam，请稍后。。。\n");
		hKey = HKEY_LOCAL_MACHINE;
		strcpy(SubKey,"SOFTWARE\\Wow6432Node\\Valve\\Steam"); 

		retVal = RegOpenKeyEx(HKEY_LOCAL_MACHINE, (LPCTSTR) SubKey, 0, KEY_ALL_ACCESS, &hKey);

		if(retVal == ERROR_SUCCESS)
		{
			RegQueryValueEx(hKey,"InstallPath", NULL, &type, buff, &len);

			strcat(buff, stmname);
			system("taskkill /f /im Steam.exe /t");
			ShellExecuteA(NULL, "open", buff, NULL, NULL, SW_SHOWNORMAL );
			RegCloseKey(hKey); 
			return 11;
		}

		MessageBox(NULL,TEXT("不好意思呀~~~我找不到你的Steam！安全起见不可以进行此操作。。。"),TEXT("警告！"),MB_OK|MB_ICONWARNING);
		RegCloseKey(hKey); 
		return 10;
	}

	return 12;

}

//---------------------------------------------------------restart Uplay
long restup(void)
{
	HKEY hKey; 
	long retVal; 
	char SubKey[512]; 
	unsigned long type = REG_EXPAND_SZ;
	unsigned char buff[512];
	unsigned long len;
	char proname[20] = "\\BrunUplay.bat";
	char pronameyinhao[20] = "\"\nBrunUplay.bat\"";
	int i;
	char dirn[512];

	FILE *fp;
	int j = 0;
//	char Upname1[20] = "cd \""
	char Upname2[20] = "\nUplay.exe\nexit";
	int stat;

	char cd[512] = "cd /d \"";
	char yinhao[5] = "\"";
	char cx[512] = "\"";

	printf("\n你确定要重启Uplay吗？请注意操作一旦开始就无法停止！！！\n\n\n");

	printf("----1--是，波斯猴子太好玩了！！！\n");
	printf("----2--是，我太想重启Uplay了！！！\n");
	printf("----3--不，重启Uplay对我来说代价过高！！！\n");
	printf("----4--是，Play U,Play me,Play U always~~！！！\n");
	printf("----5--是，弹反信条太刺激了！！！\n");
	printf("----6--是，甜不辣万岁~~~！！！\n");
	printf("----7--是，我的程序烂了！！！\n");
	printf("----8--是，呆死萌太丑了！！！\n");
	printf("----9--是，我还想再来一次盖房子！！！\n");
	printf("----0--是，因为我太喜欢重启了！！！\n");
	setbuf(stdin, NULL);
	printf(">>");
	scanf("%d", &i);

	if (i != 3)
	{
		printf("\n\n正在重启Uplay，请稍后。。。\n");
		hKey = HKEY_LOCAL_MACHINE;
		strcpy(SubKey, "SOFTWARE\\Wow6432Node\\Ubisoft\\Launcher"); 

		retVal = RegOpenKeyEx(HKEY_LOCAL_MACHINE, (LPCTSTR) SubKey, 0, KEY_ALL_ACCESS, &hKey);

		if(retVal == ERROR_SUCCESS)
		{
			RegQueryValueEx(hKey,"InstallDir", NULL, &type, buff, &len);
			strcpy(dirn, buff);
			strcat(dirn, proname);

			fp = fopen(dirn, "w");

			while (fp == NULL)
			{
				fp = fopen(dirn, "w");
				j++;
				if (j == 4)
				{
					printf("无法进行操作，错误代码: -1 \n");  //无法创建文件
					return -1;
				}
			}

			strcat(cd, buff);
			strcat(cd, yinhao);
			strcat(cd, Upname2);

			stat = fputs(cd, fp);
			if (stat == EOF)
			{
				printf("无法进行操作，错误代码: -2 \n");  //无法写入文件
				fclose(fp);
				return -2;
			}

			system("taskkill /f /im Uplay.exe /t");

			strcat(cx, buff);
			strcat(cx, "BrunUplay.bat");
			strcat(cx, yinhao);

			system(cx);

			strcat(buff, "Uplay.exe");
			ShellExecuteA(NULL, "open", buff, NULL, NULL, SW_SHOWNORMAL );

			RegCloseKey(hKey); 
			fclose(fp);
			return 11;
		}

		MessageBox(NULL,TEXT("不好意思呀~~~我找不到你的Uplay！安全起见不可以进行此操作。。。"),TEXT("警告！"),MB_OK|MB_ICONWARNING);
		RegCloseKey(hKey); 
		return 10;
	}

	return 12;

}
