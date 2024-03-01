#include<stdio.h>
void main()
{
	float a,b,area,perimeter;
	printf("Enter the inner radius of the ring ");
	scanf("%f",&a);
	printf("Enter the outer radius of the ring ");
	scanf("%f",&b);
	perimeter=2*3.14*(a+b);
	printf("The perimeter of the ring is=%f\n ",perimeter);
	area=3.14*(a*a-b*b);
	printf("The area of the ring is=%f\n ",area);
}
	
