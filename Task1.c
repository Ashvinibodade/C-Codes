/*
Give two numbers a and b and add them then substract them and assing them in a and b?
*/

#include<stdio.h>

void add_sub(int *x,int *y)
{
	int temp,temp1;
	temp=*x;
	temp1=*y;
	*x=*x+*y;
	*y=temp1-temp;
}

int main()
{
	int a,b;
	printf("Enter the value of a :");
	scanf("%d",&a);
	printf("Enter the value of b :");
	scanf("%d",&b);
	
	printf("Your value of a :%d and value of b :%d\n ",a,b);
	add_sub(&a,&b);
	printf("Your value after addition of a :%d and value after substraction of b :%d \n",a,b);
}
