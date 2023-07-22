/*
Take a input from user to print half size star pattern ,tell the user to press 0 to print half triangula star pattern or press 1 to print reverse 
half triangular star pattern....................


////////////half triangular star pattern
*
**
***
****
*****

//////////reverse half traingular star pattern
*****
****
***
**
*
*/

#include<stdio.h>
void starPattern(int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
void RstarPattern(int n)
{
	int i,j;
	for(i=0;i<n;i++)                                                  
	{
		for(j=0;j<=n-i-1;j++)                                  //for(j=i;j<n;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
int main()
{
	
	int n;
	int type;
	
	printf("Enter 0 for star pattern and 1 for reverse star pattern:");
	scanf("%d",&type);
	
	switch(type)
	{
		case 0:
			printf("Enter the number upto to which you want to print the stars:");
			scanf("%d",&n);
			starPattern(n);
			break;
			
		case 1:
			printf("Enter the number upto to which you want to print the stars:");
			scanf("%d",&n);
			RstarPattern(n);
			break;
			
		default:
			printf("You have enter invalid choice.....");
			break;
	}
	
	return 0;
}
