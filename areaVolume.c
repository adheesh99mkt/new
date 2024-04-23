/*6. Accept dimensions of a cylinder and print the surface area and volume (Hint: surface area = 2pr 2 + 2prh, 
volume = p r 2 h). Define a constant variable pi=3.14 */

#include<stdio.h>
#include<math.h>

int main()
{
	int r,h,area,volume;
	float pi=3.14;
	printf("enter the radius and height\n");
	scanf("%d\n%d",&r,&h);
	area = (2*pi*r*r)+(2*pi*r*h);
	volume = pi*r*r*h;
	
	printf("area = %d and volume = %d",area,volume);
	
}
