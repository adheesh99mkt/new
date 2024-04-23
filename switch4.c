/*4. Accept radius from the user and write a program having menu with the following options and 
corresponding actions:
Options Actions 
1. Area of Circle
2. Circumference of Circle
3. Volume of Sphere*/

#include<stdio.h>

void main()
{
	int r,action;
	float circumference,area,volume;
	printf("the action 1,2 or 3 \n");
	scanf("%d",&action);
	printf("enter the radius:");
	scanf("%d",&r);
	
	switch(action){
		case 1:
			
			area=3.14*r*r;
			printf("area = %f",area);
			break;
		case 2:
			circumference=2*3.14*r;
			printf("circumference = %f",circumference);
			break;
		case 3:
			
			volume=4/3 * 3.14 *r*r*r;
			printf("volume = %f",volume);
			break;
		default:
			printf("oopss....");
			break;
			
	}
	
}
