#include<stdio.h>
int main()
{
	float x,y;
	printf("Enter coordinates: ");
	scanf("%f%f",&x,&y);
	if (x > 0 && y > 0)
		{
		printf("The coordinates lies in 1st quadrant");
		}
	else if(x < 0 && y >0)
		{
		printf("The coordinates lies in 2nd quadrant");
		}
	else if(x<0 && y<0)
		{
		printf("The coordinates lies in 3rd quadrant");
		}
	else
		{
		printf("The coordinates lies in 4th quadrant");
		}		
}
