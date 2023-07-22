#include<stdio.h>
#include<string.h>
struct Student
{
	int id;
	int marks;
	char fav_character;
	char name[20];
};

int main()
{
	struct Student s1,s2,s3,s4;
	
	s1.id=01;
	s1.marks=400;
	s1.fav_character='A';
	strcpy(s1.name,"Ashvini Bodade");
	
	s2.id=02;
	s2.marks=420;
	s2.fav_character='N';
	strcpy(s2.name,"Nilesh Pawar");
	
	s3.id=03;
	s3.marks=440;
	s3.fav_character='J';
	strcpy(s3.name,"Jividha Koshti");
	
	s4.id=04;
	s4.marks=460;
	s4.fav_character='C';
	strcpy(s4.name,"Chetan Rathod");
	
	
	printf("Id of first student is:%d\n",s1.id);
	printf("MArks of first student is:%d\n",s1.marks);
	printf("Favourite character of first student is:%c\n",s1.fav_character);
	printf("Name of first student is:%s\n\n",s1.name);
	
	printf("Id of second student is:%d\n",s2.id);
	printf("MArks of second student is:%d\n",s2.marks);
	printf("Favourite character of second student is:%c\n",s2.fav_character);
	printf("Name of second student is:%s\n\n",s2.name);
	
	printf("Id of third student is:%d\n",s3.id);
	printf("MArks of third student is:%d\n",s3.marks);
	printf("Favourite character of third student is:%c\n",s3.fav_character);
	printf("Name of third student is:%s\n\n",s3.name);
	
	printf("Id of fourth student is:%d\n",s4.id);
	printf("MArks of fourth student is:%d\n",s4.marks);
	printf("Favourite character of fourth student is:%c\n",s4.fav_character);
	printf("Name of fourth student is:%s\n\n",s4.name);
	
}
