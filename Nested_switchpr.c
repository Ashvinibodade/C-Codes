#include<stdio.h>

int main()
{
    int age;
    int marks;
    printf("Enter your age:");
    scanf("%d",&age);

    printf("Enter your marks:");
    scanf("%d",&marks);

    switch(age)
    {
        case 3:
            printf("YOur age is 3\n");
            switch(marks)
            {
                case 45:
                    printf("YOur marks is 45\n");
                    break;

                default:
                    printf("YOur marks is not  45\n");
            }
            break;

        case 13:
            printf("YOur age is 13\n");
            break;
        case 23:
            printf("YOur age is 23\n");
            break;

        default:
            printf("Your age is not 3 ,13 or 23\n");
    }
    return 0;
}