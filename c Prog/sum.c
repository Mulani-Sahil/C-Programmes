#include<stdio.h>
int main()
{
	int i,n,s=0;
	printf("Enter the limit");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	s=s+i;
	}
	printf("The sum of the number is=%d",s);
}
