#include<stdio.h>

int main()
{
    int age;
    printf("Enter your age:");
    scanf("%d",&age);

    printf("\n You entered your age :%d ",age);

    if(age>=18)
    {
        printf("\n You are able to vote,best of luck");
    }

    return 0;
}