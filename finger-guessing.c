#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int in, com;
char name[3][10] = { "剪刀", "石头", "布" };
int win, lose;

char checkout()
{
	printf("\n当前情况：\n\t胜：%d\n\t负：%d\n\n", win, lose);
	if(win == 2)
	{
		printf("\n赢！\n");
		return 'Y';
	}
	if(lose == 2)
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
	do
	{
		printf("请输入你要出什么：\n（1代表剪刀，2代表石头，3代表布）\n");
		scanf("%d", &in);
		if(!(in == 1 || in == 2 || in == 3))
		{
			printf("你在输入什么？？？\n");
			in = 114;
			continue;
		}
		in --;
		com = rand() % 3;
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
