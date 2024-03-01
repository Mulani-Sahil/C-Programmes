#include<stdio.h>
void main()
{
	float F,C,K;
	printf("Enter the temperature in Fahrenheit ");
	scanf("%f",&F);
	C=0.5*(F-32);
	printf("The temperature in celsius is=%f \n ",C);
	K=C+273.15;
	printf("The temperature in kelvin is=%f \n ",K);
}
	
