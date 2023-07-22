#include<stdio.h>
#include<string.h>

void arrrev1(char arr[])
{
	printf("The reverse of character array is:");
	strrev(arr);
	puts(arr);	
}

void arrrev2(int arr[])
{
	int i,temp;
	for(i=0;i<5/2;i++)
	{
		temp=arr[i];
		arr[i]=arr[4-i];
		arr[4-i]=temp;	
	}
}

int main()
{
	char arr[]={'1','2','3','4','5','\0'};
	int arr1[]={1,2,3,4,5};
	int i;
	
	printf("The character array before reverse is:%s\n\n",arr);
	arrrev1(arr);
	printf("\nThe integer array before reverse is:\n\n");
	for(i=0;i<5;i++)
	{
		printf("The value of element %d is %d\n",i,arr1[i]);
	}
	printf("\nThe integer array after reverse is:\n\n");
	arrrev2(arr1);
	for(i=0;i<5;i++)
	{
		printf("The value of element %d is %d\n",i,arr1[i]);
	}
}
