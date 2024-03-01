#include<stdio.h>
int main()
{
	int a[100],i,n;
	printf("Enter the LIMIT: ");
	scanf("%d",&n);
	printf("Enter Numbers: \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("The Even Numbers are: \n");
	for(i=n-1;i>=0;i--)
	{
		printf("%d\n",a[i]);
	}
}

