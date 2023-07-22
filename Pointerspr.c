#include<stdio.h>

int main()
{
	int a=67;
	int *ptr=&a;
	int *ptr2;
	int *ptr3=NULL;

	printf("The value of a is:%d\n",a);
	printf("The value of a is:%d\n",*ptr);
	printf("The value of a in hexadecimal formate is:%x\n",ptr);             //printing number in hexadecimal format
	printf("The address of pointre to a is:%p\n",&ptr);
	printf("The address of pointre to a is:%p\n",ptr);
	printf("The address of pointre to a is:%p\n",&a);
	printf("The address of some garbage is:%p\n",ptr2);
	printf("The address of null pointer is:%p\n",ptr3);
}
