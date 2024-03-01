#include<stdio.h>
void main()
{
	float sal,t;
	printf("Enter anual basic salary: ");
	scanf("%f",&sal);
	if(sal<150000)
		t=0;
	else if(sal>=150000 && sal<=300000);
		t=sal*20/100;
	else
 		t=sal*30/100;
	printf("\n tax=%f",t);
}
