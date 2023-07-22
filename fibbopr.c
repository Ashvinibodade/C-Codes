#include<stdio.h>
/*
//////////////////////fibbonacie series thrugh recursion
int fibo(int n)
{
	if(n==1 || n==2)
	{
		return n-1;
	}
	else
	{
		return (fibo(n-1)+fibo(n-2));
	}
}

int main()
{
	int n;
	printf("Enter the number you want fibbonacie series of:");
	scanf("%d",&n);
	
	printf("Your series of fibbonacie is %d ",fibo(n));
}*/

int fibo_iterative(int n)
{
	int i;
	int a=0;
	int b=1;
	for(i=0;i<n-1;i++)
	{
		b=a+b;
		a=b-a;
	}
	return a;
}

int main()
{
	int n;
	int i;
	int sum=0;
	printf("Enter the number you want fibbonacie series of:");
	scanf("%d",&n);
	printf("Your series of fibbonacie is:%d",fibo_iterative(n));
	
}

