//Accept 5 nmbers and display//
#include<stdio.h>
int main()
{
	int a[5],i;
	printf("Enter five nos: ");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Numbers:\n");
	for(i=0;i<5;i++)
	{
		printf("%d\n",a[i]);
	}
	
}
