//Write a ‘C’ program to accept an integer and display its sum of digits.//
#include<stdio.h>
int main()
{
	int n,s=0,d;
	printf("Enter the number: ");
	scanf("%d",&n);
	while(n>0)
	{
		d=n%10;
		s=s+d;
		n=n/10;	
	}
	printf("The Sum of digits ot the given number is=%d\n",s);
}







