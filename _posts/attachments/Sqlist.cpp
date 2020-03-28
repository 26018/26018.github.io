#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define Max 50
typedef char ElemType;
typedef struct Sqlist
{
	ElemType data[Max];
	int length;
 } list;
 
void init(Sqlist *&L)
{
	memset(L->data,'\0',Max);
	L->length = 0;
}

void Insert(Sqlist *&L,ElemType a[],int n)
{
	for(int i=0;i<n;i++)
		L->data[i] = a[i];
	L->length = n;
}

void print_info(Sqlist *L)
{
	for(int i=0;i<L->length;i++)
		printf("%2c",L->data[i]);
	printf("\n");
}

bool isNull(Sqlist *L)
{
	if(L->data[0] == '\0')
		return true;
	else
		return false;
}

bool printNum(Sqlist *L,int n)
{
	if(n>L->length || n<1)
		return false;
	printf("第%d个元素是%c\n",n,L->data[n-1]);
}

void getNumLocation(Sqlist *L,ElemType n)
{
	int i=0;
	for(i=0;L->data[i] != n;i++);
	if(i>L->length)
		printf("没有这个元素\n");
	else
		printf("元素%c的位置为%d\n",n,i+1);
}

void pointLocationInsert(Sqlist *&L,ElemType e,int n)
{
	printf("\n指定位置%d插入元素：%c\n",n,e);
	if(0<n && n<=L->length)
	{
		for(int i=L->length;i>n-1;i--)
			L->data[i] = L->data[i-1];
		L->data[n-1] = e;
		L->length++;
	}	
}

void Delete(Sqlist *&L,int n)
{
	printf("删除位置%d的元素：\n",n);
	if(0<n && n<=L->length)
	{
		for(int i=n;i<L->length+1;i++)
			L->data[i-1] = L->data[i];
		L->length--;
	}	
}

int main()
{
	char a[5] = {'a','b','c','d','e'};
	Sqlist *L = (Sqlist *)malloc(sizeof(Sqlist));
	init(L);
	printf("isNull?:%d\n",isNull(L));
	Insert(L,a,5);
	print_info(L);
	printf("长度：%d\n",L->length);
	printf("isNull?:%d\n",isNull(L));
	printNum(L,3);
	getNumLocation(L,'a');
	pointLocationInsert(L,'f',3);
	print_info(L);
	Delete(L,2);
	print_info(L);
	
	init(L);
	print_info(L);
	return 0;
 } 
