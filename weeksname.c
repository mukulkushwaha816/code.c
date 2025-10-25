#include<stdio.h>
int main()
{
	int choice;
	printf("enter the day (1-7):");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf ("sunday");
			break;
		case 2:
			printf("monday");
			break;
		case 3:
			printf("tuesday");
			break;
		case 4:
			printf("wednestday");
			break;
		case 5:
			printf("thuresday");
			break;
		case 6:
			printf("friday");
			break;
		case 7:
			printf("saturday");
			break;
			defoult:
			printf("given number is wrong");
			}
}

