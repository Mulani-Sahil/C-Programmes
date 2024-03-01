#include<stdio.h>
int main()
{
	int j,i,n;
	printf("Enter the number: ");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		for(j=n;j<=n;j++)
		{
			printf("\n%d ",i*j);
		}
	}
}

