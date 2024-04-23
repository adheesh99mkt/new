/*1. Accept a single digit from the user and display it in words. For example, if digit entered is 9, display Nine.
*/
#include<stdio.h>

int main()
{
	int day;
	printf("enter the number:");
	scanf("%d",&day);
	
	switch(day){
		case 1:
			printf("zero");
			break;
		case 2:
			printf("two");
			break;
		case 3:
			printf("three");
			break;
		case 4:
			printf("four");
			break;
		case 5:
			printf("five");
			break;
		case 6:
			printf("six");
			break;
		case 7:
			printf("seven");
			break;		
		case 8:
			printf("eight");
			break;	
		case 9:
			printf("nine");
			break;
		default:
			printf("OOPSsss");
			break;
	}
	return 0;
}
