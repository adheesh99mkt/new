/*3. Write a program, which accepts annual basic salary of an employee and calculates and displays the
Income tax as per the following rules.
Basic: < 1, 50,000 Tax = 0
1, 50,000 to 3,00,000 Tax = 20%
> 3,00,000 Tax = 30% */

#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
{
	float salary,tax;
	printf("enter the salary:");
	scanf("%f",&salary);
	
	if(salary<=150000){
		printf("tax=0.00");
	}
	else if(salary>150000 && salary<=300000){
		tax=salary * 0.2;
		printf("tax=%f",tax);
	}
	else{
		tax=salary * 0.3Accept a lowercase character from the user and check whether the character is a vowel or consonant.
(Hint: a, e, i, o, u are vowels);
		printf("tax=%f",tax);
	}
}
