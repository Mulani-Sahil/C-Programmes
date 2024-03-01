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
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		printf("%d\n",a[i]);
	}
}

