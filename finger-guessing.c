#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int in, com;
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
	do
	{
		printf("��������Ҫ��ʲô��\n��1���������2����ʯͷ��3������\n");
		scanf("%d", &in);
		if(!(in == 1 || in == 2 || in == 3))
		{
			printf("��������ʲô������\n");
			in = 114;
			continue;
		}
		in --;
		com = rand() % 3;
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
