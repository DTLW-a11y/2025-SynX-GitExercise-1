#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int in, com;
char name[3][10] = { "����", "ʯͷ", "��" };

char check()
{
	switch(in - com)
	{
		case 0:
			printf("ƽ�֣�\n\n");
			return 'N';
		case -1:
		case 2:
			printf("�����ˣ�\n\n");
			return 'N';
		case 1:
		case -2:
			printf("��Ӯ�ˣ�\n\n");
			return 'Y';
	}
	return 'N';
}

int main()
{
	srand((unsigned)time(NULL));
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
	return 0;
}
