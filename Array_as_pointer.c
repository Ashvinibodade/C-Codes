#include<stdio.h>

void fun(int *ptr)
{
	int i;
	for(i=0;i<10;i++)
	{
		printf("%d\n",*(ptr+i));
	}
}
int main()
{
	int arr[]={23,45,34,67,56,89};
	fun(arr);
}
