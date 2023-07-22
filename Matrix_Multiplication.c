#include<stdio.h>
#include<stdlib.h>

int main()
{
	int m, n,i ,j,k, sum=0;
	int a[3][4] ,b[4][2] , res[3][2];
	
	printf("Enter the your first matrix:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	
	printf("Enter the your second matrix:\n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&b[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<4;i++)
	{
		for(j=0;j<2;j++)
		{
			for(k=0;k<4;k++)
			{
				sum+=a[i][k]*b[k][j];
			}
			res[i][j]=sum;
			sum=0;
		}
	}
	
	printf("\nMltiplied matrix is:\n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d \t",res[i][j]);
		}
		printf("\n");
	}
	return 0;
}
