#include<stdio.h>

int main()
{
    /*label:
        printf("We are inside label");
    goto label;                 infinite loop */  

    /*label:
        printf("We are inside label");
    goto end;
    goto label; 

    end:
        printf("We r at end");*/

    int num ,i,j;
    for(i=0;i<8;i++)
    {
            printf("%d\n",i);
            for(j=0;j<8;j++)
            {
                printf(" (enter 0 to exit the program)Enter the number:");
                scanf("%d",&num);
                if(num==0)
                {
                    //break;              it only leave the one for loop and for leaving both for loop wwe use goto
                    goto end;
                }
            }
    }
    end:

    return 0;
}
