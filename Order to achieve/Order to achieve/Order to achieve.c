#include<stdio.h>
#include"Operate.h"
int main()
{
	int x;
	Sqlist l;
	int a;
	int b, c;
	int m;
	int o;
	int p;
	Initlist_sq(&l);
	printf("输入要加入元素的数量:");
	scanf_s("%d", &x);
	for (int i = 0; i < x; i++)
		scanf_s("%d", &l.a[i]);
	l.length = x;
	for (int i = 0; i < l.length; i++)
		printf("%d   ", l.a[i]);
	printf("\n");
	printf("请输入要加入元素的位置，元素：");
	scanf_s("%d %d", &b, &c);
	InsertElem(&l, b, c);
	for (int i = 0; i < l.length; i++)
		printf("%d   ", l.a[i]);
	printf("\n");
	printf("请输入要删除元素的位置：");
	scanf_s("%d", &a);
	DeleteElem(&l, a);
	for (int i = 0; i < l.length; i++)
		printf("%d   ", l.a[i]);
	printf("请输入你要查询的数字：");
	scanf_s("%d", &m);
	p = LocateELem(l, m);
	printf("你要查询的数据的位置是%d\n", p);
	o = Getlength(&l);
	printf("线性表中的数据有%d个\n", o);
	return 0;
}