#include<stdio.h>

void fun(int array[])
{
	int i;
	for(i=0;i<10;i++)
	{
		printf("%d\n",array[i]);
	}
	array[0]=2345;              //if we change any value of array even in scope of function it will reflect in the main function
}

void fun1(int array1[2][2])
{
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",array1[i][j]);
		}
		printf("\n");
	}
}
int main()
{
	int arr[]={23,45,34,67,56,89};
	int arr1[][2]={{23,45},{4,67}};
	printf("The value at 0th position is:%d\n",arr[0]);
	fun(arr);
	printf("The value at 0th position is:%d\n",arr[0]);
	fun1(arr1);
}
