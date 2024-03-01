//Accept numbers in an array and display minimum//
#include<stdio.h>
int main()
{
	int a[100],n,i,min;
	printf("Enter the limit");
	scanf("%d",&n);
	printf("enter the numbers");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	min=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]<min)
		{
			min=a[i];
		}
	}
	printf("\n Minimum no=%d",min);
}
