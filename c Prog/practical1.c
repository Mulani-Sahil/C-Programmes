#include<stdio.h>
void main()
{	
	float r,h,area,volume;
	printf("Enter the value of radius ");
	scanf("%f",&r);
	printf("Enter the value of height ");
	scanf("%f",&h);
	area=2*3.14*r*r+2*3.14*r*h;
	printf("Area of the cyllinder is=%f\n ",area);
	volume=3.14*r*r*h;
	printf("Volume of the cyllinder is=%f\n",volume);	
} 
