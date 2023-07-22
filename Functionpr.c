#include<stdio.h>
int sum(int a,int b);               //funtion declaration
void printstar(int n)
{
	int i;
	for(i=0;i<n;i++)             //function declaration +defination
	{
		printf("%c",'*');
	}
} 
int takenum()
{
	int i;
	printf("\nEnter a number:");
	scanf("%d",&i);
	return i;	
} 
void mult()
{
	int a,b,c;
	a=2;
	b=5;
	c=a*b;
	
	printf("The value of multiplication is:%d",c);
}         
int main()
{
	int a,b,c,d;
	a=9;
	b=87;
	c=sum(a,b);                     //function call
	printf("The sum is:%d\n",c);
	printstar(7);
	d=takenum();
	printf("The number is :%d \n",d);
	mult();
}
int sum(int a,int b)                //function defination
{
	return a+b;
}
