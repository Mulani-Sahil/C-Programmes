//Accept numbers in an array and display maximum//
#include<stdio.h>
int main()
{
	int a[100],n,i,max;
	printf("Enter the limit");
	scanf("%d",&n);
	printf("enter the numbers");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	max=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	printf("\n maximum no=%d",max);
}
