#include<stdio.h>

int main()
{
    int i,j ;
    int marks[2][4]={{34,45,67,78},{23,23,45,567}};           //needed to give value of column
    
   /* int marks[36]={78,86,89,54,78,65};               ///case2  /// declaration with intialization   */
    /*int marks[36];                                   ///case1  ///declaration

    for(i=0;i<36;i++)                                           ///initialization
    {
        printf("Enter the marks of %d student is:",i);
        scanf("%d",&marks[i]);
    }*/
   /* for(i=0;i<36;i++)                                    //display 1d array
    {
        printf("Enter the marks of %d student is: %d\n",i,marks[i]);
    }*/

	 for(i=0;i<2;i++)                                   
    {
    	for(j=0;j<4;j++)
    	{
        ///	printf("Enter the marks of %d ,%d student is: %d\n",i,j,marks[i][j]);
        
        	printf("%d \t",marks[i][j]);
    	}
    	printf("\n");
	}
}
