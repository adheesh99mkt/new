/*5. Accept two numbers and swap two numbers using
i) Third variable
ii) By performing arithmetic operations.*/

#include<stdio.h>

int main()
{
	int a,b,temp;
	printf("enter two numbers\n");
	scanf("%d\n%d",&a,&b);
	
	temp=a;
	a=b;
	b=temp;
	
	printf("the value after swaping: a=%d and b=%d",a,b);
}
