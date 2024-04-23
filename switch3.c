/*3. Accept two numbers in variables x and y from the user and perform the following operations 
Options Actions 
1. Equality Check if x is equal to y
2. Less Than Check if x is less than y
3. Quotient and Remainder Divide x by y and display the quotient and 
remainder
4. Range : Accept a number and check if it lies between x and y (both 
inclusive)
5. Swap : Interchange x and y
*/

#include<stdio.h>

int main()
{
	int x,y,optr,a;
	int reminder,quotient;
	printf("enter the case number: ");
	scanf("%d",&optr);
	printf("enter X and Y :\n");
	scanf("%d\n%d",&x,&y);
	
	
	switch(optr){
		case 1:
			if(x==y){
				printf("X = Y , True");
				break;
			}
			else{
				printf("X != Y");
				break;
			}
		case 2:
			if(x<y){
				printf("X < Y, True");
				break;
			}
			else{
				printf("X !< Y");
				
			}
		case 3:
			quotient=x/y;
			reminder=x%y;
			printf("quotient = %d and reminder = %d",quotient,reminder);
			break;
		case 4:
			printf("enter the number:");
			scanf("%d",&a);
			if(a>x && a<y){
				printf("%d is between X and Y",a);
				
			}
			break;
		case 5:
			printf("before swapping : X = %d and Y = %d",x,y);
			x=x+y;
			y=x-y;
			x=x-y;
			printf("after swapping : X = %d and Y = %d",x,y);
			break;
	}
}
