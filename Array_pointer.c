#include<stdio.h>

int main()
{
	int arr[]={10,20,30,40,50};
	int *ptr=&arr;
	
	printf("The value of element at position 3 is: %d\n",arr[3]);
	printf("The address of 0th element is: %d\n",&arr[0]);
	printf("The address of 0th element is: %d\n",arr);
	ptr++;
	printf("The address of 1st element is: %d\n",ptr);
	printf("The address of 2nd element  is:%d\n",&arr[2]);
	printf("The address of 2nd element is:%d\n",arr+2);
	
	printf("The value at address of 0th element is: %d\n",*(&arr[0]));
	printf("The value at address of 1st element is: %d\n",*(arr+1));
	printf("The value at address of 2nd element  is:%d\n",*(&arr[2]));
	printf("The value at address of 3rd element is:%d\n",*(arr+3));
}
