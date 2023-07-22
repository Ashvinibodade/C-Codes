#include<stdio.h>
#define PI 3.14

int main()
{
    const int b=5;
   // b=6;  cannot do this since b is a constant
    printf("Ur value of b is :%d \n",b);

    //PI=4.567; cannot do this since PI is a constant
    printf("Ur value of PI is :%f",PI);

}