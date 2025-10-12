#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int in, com;
char name[3][10] = { "剪刀", "石头", "布" };

char check()
{
	switch(in - com)
	{
		case 0:
			printf("平局！\n\n");
			return 'N';
		case -1:
		case 2:
			printf("你输了！\n\n");
			return 'N';
		case 1:
		case -2:
			printf("你赢了！\n\n");
			return 'Y';
	}
	return 'N';
}

int main()
{
	srand((unsigned)time(NULL));
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
	return 0;
}
