//Accept n numbers and sum of numbers//
#include<stdio.h>
int main()
{
	int a[100],n,i,s=0;
	printf("Enter the limit");
	scanf("%d",&n);
	printf("enter the numbers");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n Numbers: ");
	for(i=0;i<n;i++)
	{
		s=s+a[i];
		
	}
	printf("\n %d",	s);
}
