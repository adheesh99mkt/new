//5. Write a C program to input angles of a triangle and check whether triangle is valid or not.
#include<stdio.h>

int main()
{
	int a1,a2,a3;
	printf("enter the angles:\n");
	scanf("%d\n%d\n%d\n",&a1,&a2,&a3);
	if(a1+a2+a3==180){
		printf("valid triangle");
		
	}
	else{
		printf("not valid");
	}
}
