/*7. Accept temperatures in Fahrenheit (F) and print it in Celsius(C) and Kelvin (K) (Hint: C=5/9(F-32), K = C + 
273.15)*/

#include<stdio.h>
#include<math.h>

int main()
{
	float tempF,tempC,tempK;
	printf("enter the temp in fahrenheit: ");
	scanf("%f",&tempF);
	
	tempC=5/9*tempF-32;
	tempK=tempC+273.15;
	
	
	printf("temp in C = %f",tempC);
	printf("temp in K = %f",tempK);
	
}
