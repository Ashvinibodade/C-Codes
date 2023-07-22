#include<stdio.h>

int myfun(int a)
{
	extern int sum;      //if we want to use global variable instead of local
	return sum;
}
 int sum=345;
int main()
{
	int sum=myfun(5);
	printf("The sum is:%d",sum);
}
