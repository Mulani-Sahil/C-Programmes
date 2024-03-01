#include<stdio.h>
int main()
{
	int a[5],i;
	printf("Enter 5 nos..");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Numbers are...");
	for(i=0;i<5;i++)
	{
		printf("\n%d\n",a[i]);
	}
}
