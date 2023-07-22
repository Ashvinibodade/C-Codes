#include<stdio.h>
#include<string.h>

int main()
{
	char s1[]="Ashvini";
	char s2[]="Nilesh";
	char s3[]={'\0'};
	
	printf("%s  and %s ,both are heart breaking bffs",strcat(s1,s3),strcat(s2,s3));

	return 0;
}
