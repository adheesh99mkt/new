//8. Write a program to accept 3 numbers and compute minimum and maximum from them.
#include<stdio.h>

int main()
{
	int a,b,c;
	printf("enter 3 numbers: ");
	scanf("%d\t%d\t%d\t",&a,&b,&c);
	
	if(a>b&&a>c){
		if(b>c){
			printf("%d is larger and %d is smaller",a,c);
		}
		else{
			printf("%d is larger and %d is smaller",a,b);
		}
	}
	else if(b>a&&b>c){
		if(a>c){
			printf("%d is larger and %d is smaller",b,c);
		}
		else{
			printf("%d is larger and %d is smaller",b,a);
		}
	}
	else{
		if(a>b){
			printf("%d is larger and %d is smaller",c,b);
		}
		else{
			printf("%d is larger and %d is smaller",c,a);
		}
	}
}
