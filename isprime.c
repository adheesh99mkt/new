/*3. Write a function isPrime, which accepts an integer as parameter and returns 1 if the number is prime
and 0 otherwise. Use this function in main to display the first 10 prime numbers.*/
#include<stdio.h>
int isPrime(int);

int main()
{
	int n=2,j=0;
	while(n>=2){
		while(j!=10){
			if(isPrime(n)==1){
				
				printf("%d\n",n);
				j++;	
			}
			n++;
			
		}
	}
}
int isPrime(int number)
{
    int i;

    for (i = 2; i < number; i++)
    {
        if (number % i == 0)
        {
            return 0;
        }
    }

    return 1;
}
