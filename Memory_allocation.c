#include<stdio.h>
#include<stdlib.h>

/*int main()
{
	////use of malloc
	int i,n;
	int *ptr;
	printf("Enter the size of array you want to create:\n");
	scanf("%d",&n);
	
	ptr=(int *)malloc(n* sizeof(int));
	for(i=0;i<n;i++)
	{
		printf("Enter the value no %d of array\n",i);
		scanf("%d",&ptr[i]);
	}
	printf("The array elements are:\n");
	for(i=0;i<n;i++)
	{
		printf("The value no %d of array is:%d\n",i ,ptr[i]);
	}
}*/

int main()
{
	////use of calloc
	int i,n;
	int *ptr;
	printf("Enter the size of array you want to create:\n");
	scanf("%d",&n);
	
	ptr=(int *)calloc(n, sizeof(int));
	for(i=0;i<n;i++)                            ///comment this for loop for testing by default intial value
	{
		printf("Enter the value no %d of array\n",i);
		scanf("%d",&ptr[i]);
	}
	printf("The array elements are:\n");
	for(i=0;i<n;i++)
	{
		printf("The value no %d of array is:%d\n",i ,ptr[i]);
	}

	////use of realloc
	printf("Enter the size of array you want to create:\n");
	scanf("%d",&n);
	
	ptr=(int *)realloc(ptr,n* sizeof(int));
	for(i=0;i<n;i++)
	{
		printf("Enter the new value no %d of array\n",i);
		scanf("%d",&ptr[i]);
	}
	printf("The array elements are:\n");
	for(i=0;i<n;i++)
	{
		printf("The  new value no %d of array is:%d\n",i ,ptr[i]);
	}
	free(ptr);
}
