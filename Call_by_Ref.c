#include<stdio.h>

void swap(int *x,int *y)
{
	int temp=*x;
	*x=*y;
	*y=temp;
	return;
}

void changevalue(int *x)
{
	*x=345;
}

int main()
{
	int a,b;
	a=34;
	b=45;
	printf("%d & %d\n ",a,b);
	swap(&a,&b);
	printf("%d & %d",a,b);
	
	printf("The value of a is:%d\n",a);
	changevalue(&a);
	printf("The value of a is:%d",a);
}
