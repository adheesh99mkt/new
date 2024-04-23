/*Write a function isEven, which accepts an integer as parameter and returns 1 if the number is even, and
0 otherwise. Use this function in main to accept n numbers and ckeck if they are even or odd.*/

#include<stdio.h>
int oddEven(int);

int main()
{
	int n,number;
	printf("enter n:");
	scanf("%d",&n);
	printf("enter the numbers\n");
	int i=0;
	for(i=0;i<n;i++){
		scanf("%d",&number);
		printf("%d --> %d\n",number,oddEven(number));
	}
}
int oddEven(int num)
{
	if(num%2==0){
		return 1;
	}
	else{
		return 0;
	}
}
