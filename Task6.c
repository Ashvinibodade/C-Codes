/*
Create Rock , Paper & Scissor game 

Player1,Player2

rock vs scisssor ------rocks wins
paper vs scissors -----scissors wins
paper vs rock --------paper wins

Write a C program to allow user to play this game three times with computer. Lock the scores of computer and the player .
Display the name of the winner at the end ????????????

NOTES: You have to display name of the player during the game .Take the name of the user as input  
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int generateRandomfun(int n)
{
	srand(time(NULL));
	return rand() % n;
}

int greater(char1,char2)
{
	if(char1==char2)
	{
		return -1;
	}
	
	if((char1=='r') && (char2=='s'))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	
	if((char1=='p') && (char2=='r'))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	
	if((char1=='s') && (char2=='p'))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int playerScore=0, CompScore=0, temp ,i;
	char playerchar,compchar;
	
	char dict[]={'r','p','s'};
	
	printf("Welcome to the Rock,Paper and Scissor game\n\n");
 	for(i=0;i<3;i++)
 	{
 		
 		//Take player one input
 		printf("Player 1`s turn:");
 		printf("\n\nChoose 1 for rock ,2 for paper and 3 for scissor \n\n");
 		scanf("%d",&temp);
 		playerchar=dict[temp-1];
 		printf("You choice %c \n\n",playerchar);
 		
 		//Take computers input
 		printf("Computer`s turn:");
 		printf("\n\nChoose 1 for rock ,2 for paper and 3 for scissor \n\n");
 		temp=generateRandomfun(3)+1;
 		compchar=dict[temp-1];
 		printf("Computer choice %c \n\n",compchar);
 		
 		//compare the scores
 		if(greater(compchar,playerchar)==1)
 		{
 			CompScore+=1;
			printf("Computers got it\n");	
		}
		else if(greater(compchar,playerchar)==-1)
		{
			CompScore+=1;
			playerScore+=1;
			printf("Its a drop\n");
		}
		else
		{
			playerScore+=1;
			printf("You got it\n");
		}
		
	}
	
	if(playerScore > CompScore)
	{
		printf("You win");
	}
	else if(playerScore < CompScore)
	{
		printf("Computers win");
	}
	else
	{
		printf("Match drops");
	}
	
	
	return 0;
}
