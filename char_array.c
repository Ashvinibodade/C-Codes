#include<stdio.h>

void fun(char str[])
{
	int i=0;
	while(str[i]!=0)
	{
		printf("%c",str[i]);
		i++;
	}
	printf("\n");
}

int main()
{
	//char str[2]={'A','s','h','v','i','n','i','\0'};                //string by direct declare and initialize
	// or char str[]="Ashvini";
	 
	char str[23]; 
	printf("Enter any string which u want to see in your screen:\n");
	gets(str);                                                   //user input in string
	printf("Using custome function:\n");
	fun(str);                                                 //through fun
	printf("Using printf function:\n%s\n",str);
	printf("Using puts method:\n");
	puts(str);
	return 0;
}
