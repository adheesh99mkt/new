/*Accept a lowercase character from the user and check whether the character is a vowel or consonant.
(Hint: a, e, i, o, u are vowels)*/
#include<stdio.h>

int main()
{
	char letter;
	printf("enter the letter:");
	scanf("%c",&letter);
	if(letter=='a'||letter=='e'||letter=='i'||letter=='o'||letter=='u')
	{
		printf("vowel");
	}
	else{
		printf("consonant");
	}
}
