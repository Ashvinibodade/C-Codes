#include<stdio.h>

int myfun(int a)
{
	static int sum;      //if we want to use global variable instead of local
	sum++;
	printf("The sum is:%d\n",sum);
	return sum;
}
int main()
{
	int sum=myfun(5);
	sum=myfun(5);
	sum=myfun(5);
	
}
