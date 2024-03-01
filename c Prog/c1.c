#include<stdio.h>
 int main()
{	
	float l,b,a,p;
	int c;	 
	printf("Enter the length and breadth : ");
	scanf("%f%f",&l,&b);
	printf("\n1-Area \n2-Perimeter \nEnter your Choice : ");
	scanf("%d",&c);
	switch(c)
	{
		case 1:a=l*b;
		printf("Area of the rectangle is=%f\n",a);
		break;
		case 2:a=2*(l+b);
		printf("Perimeter of the rectangle is = %f\n",a);
		break;
		
	default : printf("Entered invalid number");
	}
	
}
