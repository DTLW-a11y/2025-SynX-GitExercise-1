#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int in, com;
char stin[5], cheat;
char name[3][10] = { "����", "ʯͷ", "��" };
int win, lose;
char checkout()
{
	printf("\n��ǰ�����\n\tʤ��%d\n\t����%d\n\n", win, lose);
	if(win == 2)
	{
		printf("\nӮ��\n");
		return 'Y';
	}
	if(lose == 2)
	{
		printf("\n�䣡\n");
		return 'Y';
	}
	return 'N';
}

char check()
{
	switch(in - com)
	{
		case 0:
			printf("ƽ�֣�\n\n");
			return checkout();
		case -1:
		case 2:
			printf("�����ˣ�\n\n");
			lose ++;
			return checkout();
		case 1:
		case -2:
			printf("��Ӯ�ˣ�\n\n");
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
		printf("��������Ҫ��ʲô��\n��1���������2����ʯͷ��3������\n");
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
					printf("\n--- ����˵�� ---\n\n");
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
			printf("��������ʲô������\n");
			continue;
		}
		com = (cheat == 'n') ? (rand() % 3) : (in - 1);
		printf("\n�������%s\n", name[in]);
		printf("���Գ���%s\n", name[com]);
	}
	while(check() == 'N');
	printf("\n�س�������Ϸ��");
	char pause;
	pause = getchar();
	pause = getchar();
	return 0;
}
