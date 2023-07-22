#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int GenerateRandomNum(int n)
{
	 srand(time(NULL)); //it is defined in stdlib.h
	 return rand()%n;
}
int main()
{
    
    printf("The random number between 0 and 10 is %d",GenerateRandomNum(12));
     return 0;
}
