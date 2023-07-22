#include<stdio.h>

int main()
{
    int i;
    int j;

    //int i=0,j=0;                                   // for case 3
   /* for(i=0;i<5;i++)                                    //  CASE1
    {
        printf("%d/n",i);
    }*/

    /*for(i=0,j=0;i<5;i++)                                  //CASE2
    {
        printf("%d ,%d\n ",i,j);
    }*/

    /*for(;i<5;i++)                                          //CASE3
    {
        printf("%d/n",i);
    }*/

    /*for(i=0,j=0;i<5,j<3;i++)                                // CASE4 
    {
        printf("%d ,%d\n ",i,j);
        j++;
    }*/

   /* for(i=0,j=0;j<3,i<5;i++)                                    //CASE5   
    {
        printf("%d ,%d\n ",i,j);
        j++;
    }*/

    for(;j=3,i<5;i++)                                    //CASE5   
    {
        printf("%d ,%d\n ",i,j);
        j++;
    }
    return 0;
}