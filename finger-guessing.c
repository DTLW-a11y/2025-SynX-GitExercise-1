#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int in, com;
char stin[5], cheat;
char name[3][10] = { "剪刀", "石头", "布" };
int win, lose;
char checkout()
{
	printf("\n当前情况：\n\t胜：%d\n\t负：%d\n\n", win, lose);
	if(win == 3)
	{
		printf("\n赢！\n");
		return 'Y';
	}
	if(lose == 3)
	{
		printf("\n输！\n");
		return 'Y';
	}
	return 'N';
}

char check()
{
	switch(in - com)
	{
		case 0:
			printf("平局！\n\n");
			return checkout();
		case -1:
		case 2:
			printf("你输了！\n\n");
			lose ++;
			return checkout();
		case 1:
		case -2:
			printf("你赢了！\n\n");
			win ++;
			return checkout();
	}
	return 'N';
}

int main()
{
	srand((unsigned)time(NULL));
	win = 0;
	lose = 0;
	cheat = 'n';
	do
	{
		printf("请输入你要出什么：\n（1代表剪刀，2代表石头，3代表布）\n");
		scanf("%s", &stin);
		switch(strlen(stin))
		{
			case 1:
			if(stin[0] == '1')in = 0;
			else if(stin[0] == '2')in = 1;
			else if(stin[0] == '3')in = 2;
				break;
			case 3:
				if(stin[0] == 'z' && stin[1] == 'z' && stin[2] == 'z')
				{
					printf("\n--- 不敢说话 ---\n\n");
					cheat = 'y';
					in = 114;
					continue;
				}
				break;
			default:
				in = 114;
		}
		if(!(in == 0 || in == 1 || in == 2))
		{
			printf("你在输入什么？？？\n");
			continue;
		}
		com = (cheat == 'n') ? (rand() % 3) : (in - 1);
		printf("\n你出的是%s\n", name[in]);
		printf("电脑出了%s\n", name[com]);
	}
	while(check() == 'N');
	printf("\n回车结束游戏：");
	char pause;
	pause = getchar();
	pause = getchar();
	return 0;
}
