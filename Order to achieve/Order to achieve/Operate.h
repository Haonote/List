#pragma once
#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
#define OK 1
#define ERROR 0
#define INFEASIBLE -1
#define OVERFLOW -2
#define MAXSIZE 100
/*typedef struct {
	int number;
	char name;
	int price;
}text;*/
typedef struct {
	int a[MAXSIZE];
	int length;
}Sqlist;
void Initlist_sq(Sqlist *l)
{
	*l->a = (int)malloc(MAXSIZE * sizeof(int));
	l->length = 0;
	return OK;
}
void DestoryList(Sqlist* l)
{
	if (l->a) free(l->a);
}
void ClearList(Sqlist* l) {
	l->length = 0;
}
int Getlength(Sqlist* l)
{
	return (l->length);
}
int Isempty(Sqlist* l)
{
	if (l->length == 0) return 1;
	else return 0;
}
int GetELem(Sqlist l, int i, int n)
{
	if (i<1 || i>l.length) return ERROR;
	n = l.a[i];
	return OK;
}
int LocateELem(Sqlist l, int i)
{
	for (int j = 0; j < l.length; j++)
	{
		if (l.a[j] == i) return j + 1;
	}
	return 0;
}
void InsertElem(Sqlist* l, int i, int n)
{
	if (i<1 || i>l->length) return ERROR;
	if (l->length == MAXSIZE) return ERROR;
	for (int j = l->length-1; j >= i - 1; j--)    l->a[j + 1] = l->a[j];
	l->a[i - 1] = n;
	l->length++;
	return OK;
}
void DeleteElem(Sqlist* l, int i)
{
	if (i<1 || i>l->length) return ERROR;
	for (int j = i; j <= l->length - 1; j++)  l->a[j-1] = l->a[j];
	l->length--;
	return OK;
}