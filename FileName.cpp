#define _CRT_SECURE_NO_WARNINGS 1
#include "stdio.h"
#include "stdlib.h"
int amount = 10000;
int login(int pwd)
{
	if (pwd == 123456)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
void show()
{
	printf("              ��������ATM\n");
	printf("--------------------------------------------\n");
	printf(" 1.��ѯ���  2.ȡ��  3.���   4.�˿�  5.����\n");
	printf("--------------------------------------------\n");
}
void query()
{
	printf("�˻����=%d", amount);
}
void draw()
{
	int money;
	printf("������ȡ����:");
	scanf("%d", &money);
	amount = amount - money;
	printf("ȡ�����");
}
void save()
{
	int money;
	printf("���������");
	scanf("%d", &money);
	amount = amount + money;
	printf("������");
}

int main()
{

		int pwd, flag = 1, select;
	printf("����������:");
	scanf("%d", &pwd);

	if (login(pwd) == 1)
	{
		printf("������ȷ");
		system("cls");
		show();
		while (flag == 1)
		{
			printf("��ѡ�����ѡ�");
			scanf("%d", &select);
			switch (select)
			{
			case 1:query(); break;
			case 2:draw(); break;
			case 3:save(); break;
			case 4:flag = 0;
			case 5:system("cls"); show();
			}
		}
	}
	else
	{
		printf("�������,����������!\n");

	}

	

	return 0;
}