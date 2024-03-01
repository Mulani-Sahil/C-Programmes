#include<stdio.h>
void main()
{
	float l,b,h,surface_area,volume;
	printf("Enter the length ");
	scanf("%f",&l);
	printf("Enter the breadth ");
	scanf("%f",&b);
	printf("Enter the height ");
	scanf("%f",&h);
	surface_area=2*(l*b+l*h+h*b);
	printf("The srface area of the cuboid is=%f\n ",surface_area);
	volume=l*b*h;
	printf("The volume of the cuboid is=%f\n ",volume);
}	
