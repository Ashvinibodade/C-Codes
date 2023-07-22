#include<stdio.h>

int main()
{
	int a=36;
	int *ptr=&a;
	char b='A';
	char *ptr1=&b;
	
	printf("The address of a is :%d \n",ptr);
	printf("The address of a with increment in one size of int  is :%d \n",ptr+3ptr++;);
	ptr++;
	printf("The address of a is :%d \n",ptr);
	
	printf("The address of b is :%d \n",ptr1);
	printf("The address of b with increment in one size of char is :%d \n",ptr1+1);
	printf("The address of b with decrement in two size of char is :%d \n",ptr1-2);
}
