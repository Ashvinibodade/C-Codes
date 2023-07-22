#include<stdio.h>

/*int main()                                           //CASE 1
{
	typedef unsigned long ul;
	typedef int integer;
	
	ul a=23;
	integer b=34;
	
	printf("The value of a is:%d\n ",a);
	printf("The value of b is:%d \n",b);
}*/

/*typedef struct Student                                 //CASE 2
{
	int id;
	int marks;
	char fav_character;
	char name[20];
}std ;

int main()
{
	struct Student s1,s2;
	std s3,s4;
	
	s1.id=01;
	s2.id=02;
	s3.id=03;
	s4.id=04;
	
	printf("The value of id of s1:%d\n",s1.id);
	printf("The value of id of s2:%d\n",s2.id);
	printf("The value of id of s3:%d\n",s3.id);
	printf("The value of id of s4:%d\n",s4.id);
}*/



int main()
{
	/*int* a,b;               //this statement consider only a as pointer 
	int c=23;
	a=&c;
	b=&c;                     //thatswhy this statement create an error
	
	printf("The value of a is:%d",a);
	printf("The value of b is:%d",b);*/
	
	//to resolve this--->
	
	//////////////////////////////error error error in my understanding yrr/////////////////////////////////////////////////
	
	typedef int* integerpointer;
	
	integerpointer a,b;
	int c=34;
	a=&c;
	b=&c;
	
	printf("The value of a is:%d",a);
	printf("The value of b is:%d",b);
}
