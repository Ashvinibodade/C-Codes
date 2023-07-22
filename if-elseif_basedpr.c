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
    else if(age>10)
    {
        printf("\n Your age is between 10 and 18 ,you r not fully eligible to vote");
    }
    else
    {
        printf("\n You cant  vote");
    }

    return 0;
}