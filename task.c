/*
km to miles
inches to foot
cms to inches
pound to kgs
inches to meters
*/

/*
1...........1kg=0.621miles
2...........1 inch=0.0833 foot
3...........1cm=0.394 inches
4...........1 pound=0.454kg
5...........1 inch=0.0254 meters
*/

#include<stdio.h>

int main()
{
	int choice;
	float input1,input2,input3,input4,input5;
	
	while(1)
	{
		printf("\n1.kg to miles convertion\n");
		printf("2.inches to foot convertion\n");
		printf("3.cm to inches convertion\n");
		printf("4.pound to kgs convertion\n");
		printf("5.inches to meters convertion\n");
		printf("6.Exit\n");
	
		printf("Enter choice which convertion you want to perform:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("\nEnter how many kg you want to convert:");
				scanf("%f",&input1);
				printf("%f kg is equals to %f miles",input1,input1*0.621);
				break;
			case 2:
				printf("Enter how many inches you want to convert:");
				scanf("%f",&input2);
				printf("%f inches=%f foot",input2,input2*0.0833);
				break;
			case 3:
				printf("Enter how many cms you want to convert:");
				scanf("%f",&input3);
				printf("%f cm=%f inches",input3,input3*0.394);
				break;
			case 4:
				printf("Enter how many pounds you want to convert:");
				scanf("%f",&input4);
				printf("%f pounds=%f kg",input4,input4*0.454);
				break;
			case 5:
				printf("Enter how many inches you want to convert:");
				scanf("%f",&input5);
				printf("%f inches=%f meters",input5,input5*0.0254);
				break;
			case 6:
				exit(0);
			default:
				printf("You select out of wound");
		}
    }
	return 0;
}
