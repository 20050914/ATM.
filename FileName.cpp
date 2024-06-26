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
	printf("              个人银行ATM\n");
	printf("--------------------------------------------\n");
	printf(" 1.查询余额  2.取款  3.存款   4.退卡  5.返回\n");
	printf("--------------------------------------------\n");
}
void query()
{
	printf("账户余额=%d", amount);
}
void draw()
{
	int money;
	printf("请输入取款金额:");
	scanf("%d", &money);
	amount = amount - money;
	printf("取款完成");
}
void save()
{
	int money;
	printf("请输入存款金额：");
	scanf("%d", &money);
	amount = amount + money;
	printf("存款完成");
}

int main()
{

		int pwd, flag = 1, select;
	printf("请输入密码:");
	scanf("%d", &pwd);

	if (login(pwd) == 1)
	{
		printf("密码正确");
		system("cls");
		show();
		while (flag == 1)
		{
			printf("请选择操作选项：");
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
		printf("密码错误,请重新输入!\n");

	}

	

	return 0;
}