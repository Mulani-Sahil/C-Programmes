//Write a ‘C’ program to find the area and perimeter of rectangle.//
#include<stdio.h>
int main()
{
	
	float a,p,l,b;
	printf("Enter Lenght and breadth:");
	scanf("%f%f",&l,&b);
	a=l*b;
	p=2*(l+b);
	printf("Area of a rectangle =%f\n ",a);
	printf("Perimeter of a rectangle=%f ",p);	
	
}
