#include<stdio.h>
int main()
{
	int i,n;
	printf("Enter limit");
	scanf("%d",&n);
	for(i=2;i<=n;i=i+2);
	{
	printf("\n Even no=%d",i);
	}
}
