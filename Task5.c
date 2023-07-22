///Dynamic memory allocation-----


/*
ABC pvt limited manages employeee records of other employess
Employee ID can be of any length and it can contain any character
For 3 employees,you have to take length of employee id as input int the length integer variable .
Then ,you have to take employee id as an input and display it on screen.
Store the employee id in a character array which is allocated dynamically.
you have to create ony one character array to store id's????????????????????????????????????????????
*/ 

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int id_length,i;
	char *ptr;
	
	printf("Enter the length of the first emplooyee id:\n");
	scanf("%d",&id_length);
	
	ptr=(char *)calloc(id_length,sizeof(char));
	
	printf("Enter the id of first employee:");
	for(i=0;i<id_length;i++)
	{
		scanf("%c",&ptr[i]);
	}
	
	printf("The id of first employee is:");
	for(i=0;i<id_length;i++)
	{
		printf("%c",ptr[i]);
	}
	
	printf("\nEnter the length of the second emplooyee id:\n");
	scanf("%d",&id_length);
	
	ptr=(char *)realloc(ptr,id_length*sizeof(char));
	
	printf("Enter the id of Second employee:");
	for(i=0;i<id_length;i++)
	{
		scanf("%c",&ptr[i]);
	}
	
	printf("The id of Second employee is:");
	for(i=0;i<id_length;i++)
	{
		printf("%c",ptr[i]);
	}
	
	printf("\nEnter the length of the third emplooyee id:\n");
	scanf("%d",&id_length);
	
	ptr=(char *)realloc(ptr,id_length*sizeof(char));
	
	printf("Enter the id of third employee:");
	for(i=0;i<id_length;i++)
	{
		scanf("%c",&ptr[i]);
	}
	
	printf("The id of third employee is:");
	for(i=0;i<id_length;i++)
	{
		printf("%c",ptr[i]);
	}
	free(ptr);
}
