#include<stdio.h>

/*int fun()                       //TASK 1
{
	return 34;
}
int main()
{
	printf("The value of function is:%d",fun());
}*/

/*int fun(int b)                       //TASK 2 
{
	return b*10;
}
int main()
{
	int b=344;
	int val=fun(b);
	printf("The value of function is:%d",val);
}*/

/*int fun(int b)                       //TASK 3 -- test the varible of formal argument and in main function are stored at diff places 
{
	printf("The address of variable inside the function is %d\n",&b);
	return b*10;
}
int main()
{
	int b=344;
	printf("The address of variable inside the main is %d\n",&b);
	int val=fun(b);
	printf("The value of function is:%d",val);
}*/


/*int b=34;
int fun(int b)                       //TASK 4 -- the local varible get precedent if we have same name of variable at local and global place 
{
	printf("The value of b inside the  function is:%d\n",b);
	return b*10;
}

int fun1(int b1)                       //TASK 5 -- now it give the value of global variabl inside the function 
{
	printf("The value of b inside the  function is:%d\n",b);
	return b1*10;
}
int main()
{
	int b=344;
	
	int val=fun(b);
	printf("The value of b inside the main function is:%d\n",val);
	
	int val1=fun1(b);
	printf("The value of b inside the main function is:%d\n",val1);
}*/

int fun(int b)                       //TASK 5 -- static variable
{
	static int myvar=10;
	printf("The value of b inside the  function is:%d\n",myvar);
	myvar++;
	
	return b+myvar;
}

int main()
{
	int b=344;
	
	int val=fun(b);
	
	val=fun(b);
	
	val=fun(b);

	
}
