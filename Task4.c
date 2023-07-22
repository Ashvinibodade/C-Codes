/*
You manage a travel agency and you want  your n drivers to input their following details:
1.Name
2.Driving Licence no
3.Route
4.kms u travel

Your program should be able to take n as input and your drivers will  start inputting their details one by one .

Your program should print details of the drivers in a beautiful fashion .
use structures for this
*/


#include<stdio.h>

struct agency
{
	char Name[25];
	char D_Licence_no[20];
	char Route[50];
	int T_distance;
}d;

int main()
{
	int n,i;
	
	printf("Enter the no of driver want to join this agency:::::::::");
	scanf("%d",&n);
	printf("***************************************************************************************************************\n");
	int No_Driver[n];
	
	for(i=1;i<=n;i++)
	{
		printf("-----------Enter the details of %d driver:------------\n",i);
		printf("Enter the name of driver:\n");
		gets(d.Name);
		getchar();
		
		printf("Enter the number of driving license  of driver:\n");
		gets(d.D_Licence_no);
		getchar();
		
		printf("Enter the Route by which driver travels:\n");
		gets(d.Route);
		
		printf("Enter how much distance travelled by driver:\n");
		scanf("%d",&d.T_distance);
	
	}
	
	printf("***************************************************************************************************************\n");

	for(i=1;i<=n;i++)
	{
		printf("----------The details inserted of %d driver is:-----------------\n",i);
		printf("The name of the driver is:%s\n",d.Name);
		printf("The driving license number of the driver is:%s\n",d.D_Licence_no);
		printf("The Route of the driver is:%s\n",d.Route);
		printf("KMs travelled by the driver is:%d\n",d.T_distance);
	}
	
	return 0;
}
