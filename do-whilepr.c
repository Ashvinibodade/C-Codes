#include <stdio.h>

int main()
{
    int num, index = 0;
    printf("Enter the number:");
    scanf("%d", &num);

    do
    {
        printf("%d\n", index);                  //for printing values from 0
       // printf("%d\n", index+1);              for printing values from 1
        index = index + 1;
    } while (index < num);

    return 0;
}