#include<stdio.h>

int myfun(int a)
{
	int sum;      //if we want to use global variable instead of local
	sum++;
	printf("The sum is:%d\n",sum);
	return sum;
}
int main()
{
	register int sum=myfun(5);
	sum=myfun(5);
	sum=myfun(5);
	
}
