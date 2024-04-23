/*2. Write a program, which accepts two integers and an operator as a character (+ - * / ), performs the 
corresponding operation and displays the result.*/

#include<stdio.h>

int main()
{
	int a,b,result;
	char optr;
	printf("enter the operation:\n");
	scanf("%c",&optr);
	printf("enter the 2 numbers:\n");
	scanf("%d\n%d",&a,&b);
	
	
	
	switch(optr){
		case '+':
			result=a+b;
			printf("sum= %d",result);
			break;
		case '-':
			result=a-b;
			printf("difference= %d",result);
			break;
		case '*':
			result=a*b;
			printf("product= %d",result);
			break;
		case '/':
			result=a/b;
			printf("division= %d",result);
			break;
		default:
			printf("oopss wrong operation");
			break;
	}
	return 0;
}
