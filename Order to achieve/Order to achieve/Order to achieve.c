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
	printf("����Ҫ����Ԫ�ص�����:");
	scanf_s("%d", &x);
	for (int i = 0; i < x; i++)
		scanf_s("%d", &l.a[i]);
	l.length = x;
	for (int i = 0; i < l.length; i++)
		printf("%d   ", l.a[i]);
	printf("\n");
	printf("������Ҫ����Ԫ�ص�λ�ã�Ԫ�أ�");
	scanf_s("%d %d", &b, &c);
	InsertElem(&l, b, c);
	for (int i = 0; i < l.length; i++)
		printf("%d   ", l.a[i]);
	printf("\n");
	printf("������Ҫɾ��Ԫ�ص�λ�ã�");
	scanf_s("%d", &a);
	DeleteElem(&l, a);
	for (int i = 0; i < l.length; i++)
		printf("%d   ", l.a[i]);
	printf("��������Ҫ��ѯ�����֣�");
	scanf_s("%d", &m);
	p = LocateELem(l, m);
	printf("��Ҫ��ѯ�����ݵ�λ����%d\n", p);
	o = Getlength(&l);
	printf("���Ա��е�������%d��\n", o);
	return 0;
}