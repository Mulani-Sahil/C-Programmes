//Write a program to accept an integer and reverse the number//
#include<stdio.h>
int main()
{
	int n,r=0,d;
	printf("Enter number: ");
	scanf("%d",&n);
	while(n>0)
	{
		d=n%10;
		r=r*10+d;
		n=n/10;
	}
		printf("Reverse no is %d ",r);
}
