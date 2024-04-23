//Write a C program to accept a character and invert the case of it.

#include<stdio.h>
#include<ctype.h>

int main()
{
	char letter;
	printf("enter the letter: ");
	scanf("%c",&letter); //getchar(letter);
	
	if(islower(letter)){
		putchar(toupper(letter));
	}
	else{
		putchar(tolower(letter));
	}
}
