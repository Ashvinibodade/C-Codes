#include<stdio.h>
#include<string.h>

void parser(char *string)
{
	int in=0;         //variable to track whether we are inside the tag
	int index=0;
	int i;
	
	for(i=0;i<strlen(string);i++)
	{
		if(string[i]='<')
		{
			in=1;
			continue;
		}
		else if(string[i]='>')
		{
			in=0;
			continue;
		}
		if(in==0)
		{
			string[index]=string[i];
			index++;
		}
	}
	string[index]='\0';
	
	////////////remove trailing space from begining
	while(string[0]==' ')
	{
		for(i=0;i<strlen(string);i++)
		{
			string[i]=string[i+1];	
		}	
	}
	
	///////////////remove trailing space from last
	while(string[strlen(string)-1]==' ')
	{
		string[strlen(string)-1]='\0';
	}
		
}

int main()
{
	char string[]="<h1>           This is the heading         </h1>";
	parser(string);
	
	printf("The parsed string is  ~~~~ %s ~~~~~\n",string);
	return 0;
}
