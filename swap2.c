#include<stdio.h>

int main()
{
	int a,b;
	printf("enter the two numbers:\n");
	scanf("%d\n%d",&a,&b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("after swapping: a=%d and b=%d",a,b);
}
