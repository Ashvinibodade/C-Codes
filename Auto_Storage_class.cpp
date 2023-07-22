//Declaration-telling the compiler about the variable(no space reserved)
//Defination-declaration+space reservation

#include<stdio.h>

int myfun(int a,int b)
{
	auto int sum;   //automatic variable //by default storage class is auto
	sum=a+b;
	return sum;
}

int main()
{
	int sum=myfun(2,5);
	printf("The sum is:%d",sum);
}
