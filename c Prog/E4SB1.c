#include<stdio.h>
int main()
{
	float r,a;
	int ch;
	printf("Enter the radius : ");
	scanf("%f",&r);
	printf("\n 1-Area of circle\n 2-Circumference of the circle\n 3-volume of the sphere \n enter your choice : ");
	scanf("%d",&ch);
	switch(ch)
	{
	case 1:a=3.14*r*r;
	printf("Area of the circle is=%f ",a);
	break;
	case 2:a=3.14*r*2;
	printf("Circumference of the circle is=%f ",a);
	break;
	case 3:a=3.14*r*r*r*4/3;
	printf("volume of the sphere is=%f ",a);
	break;	
	}
}	
