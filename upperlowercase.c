//6. Write a C program to check whether a entered character is uppercase or lowercase alphabet.

#include<stdio.h>

int main()
{
	char letter;
	printf("enter the letter: ");
	scanf("%c",&letter);
	if(letter>='A' && letter<='Z'){
		printf("uppercase");
	}
	else{
		printf("lowercase");
	}
}
