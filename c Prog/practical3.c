#include<stdio.h>
void main()
{
	float u,a,t,v,s;
	printf("Enter the initial velocity ");
	scanf("%f",&u);
	printf("Enter the acceleration ");
	scanf("%f",&a);
	printf("Enter the time ");
	scanf("%f",&t);
	v=u+a*t;
	printf("the final velocity is=%f\n ",v);
	s=u+a*t*t;
	printf("the distance travlled is=%f\n ",s);
}
