#include<stdio.h>

int isPalindrom(int num)
{
	int reversed=0;
	int originalnum=num;
	while(num!=0)
	{
		reversed=reversed *10 + num%10;
		num=num/10;
	}
	if(originalnum==reversed)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main()
{
	int num;
	printf("Enter the number to check number is palindrom or not:");
	scanf("%d",&num);
	
	if(isPalindrom(num))
	{
		printf("This number is palindrom");
	}
	else
	{
		printf("This numbeer is not palindrom");
	}
	return 0;
}
