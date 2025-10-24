#include<stdio.h>
int main()
{
	int choice;
	printf("enter the day (1-7):");
	scanf("%d",&choice);
	switch(choice)
	{
		case1:
			printf ("sunday");
			break;
		case2:
			printf("monday");
			break;
		case3:
			printf("tuesday");
			break;
		case4:
			printf("wednestday");
			break;
		case5:
			printf("thuresday");
			break;
		cace6:
			printf("friday");
			break;
		case7:
			printf("saturday");
			break;
			defoult:
			printf("given number is wrong");
			}
}

