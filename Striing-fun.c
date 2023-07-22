#include<stdio.h>
#include<string.h>

int main()
{
	char s1[]="Ashvini";
	char s2[]="Nilesh";
	char s3[45]=;
	//puts(strcat(s1,s2));
	
	strcpy(s3,s2);
	puts(s3);
	printf("The length of s1 is %d\n",strlen(s1));
	printf("The length of s2 is %d\n",strlen(s2));
	printf("The reverse of s1 is:");
	puts(strrev(s1));
	printf("\n");
	printf("The reverse of s2 is: ");
	puts(strrev(s2));
	printf("\n");
	
	strcpy(s3,strcat(s1,s2));
	puts(s3);
	
	printf("strcmp for s1,s2 returns %d",strcmp(s1,s2));
}
