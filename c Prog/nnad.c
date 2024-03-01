//Accept n numbers and display//
#include<stdio.h>
int main()
{
	int a[100],n,i;
	printf("Enter the limit: ");
	scanf("%d",&n);
	printf("enter the numbers: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n Numbers:\n ");
	for(i=0;i<n;i++)
	{
		printf("\n %d",	a[i]);
	}
	
}
