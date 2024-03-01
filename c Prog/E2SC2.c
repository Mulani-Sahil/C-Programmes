#include<stdio.h>
int main()
{
	float bs,hr,da,pt,id,tkh;
	printf("Enter Employee Id ");
	scanf("%f",&id);
	printf("Enter Basic Salary ");
	scanf("%f",&bs);
	 hr=0.1*bs;
	 da=0.3*bs;
	 pt=0.05*bs;
	tkh=bs+hr+da-pt;
	printf("House Rent=%f\n ",hr);
	printf("Dearness Allowance=%f\n ",da);
	printf("The Take home salary of an employee=%f\n ",tkh);	
}
