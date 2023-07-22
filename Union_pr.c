#include<stdio.h>
#include<string.h>
union Student
{
	int id;
	char name[20];
};

int main()
{
	union Student s1,s2;
	
	s1.id=01;                                    //this gives thw garbage value because this call donnt connect any location in memory
	strcpy(s1.name,"Ashvini Bodade");           //this value comes correct because the last call by obj of union take the memory
	
	 //////////////////////////at a time only one variable have a memory loctaion0/////////////////////////
	
    strcpy(s2.name,"Nilesh Pawar");          //this gives thw garbage value because this call donnt connect any location in memory
 	s2.id=01;                                   //this value comes correct because the last call by obj of union take the memory
	
	printf("The id of s1 is:%d\n",s1.id);
	printf("The name of s1 is:%s\n",s1.name);
	
	printf("The id of s2 is:%d\n",s2.id);
	printf("The name of s2 is:%s\n",s2.name);
}
