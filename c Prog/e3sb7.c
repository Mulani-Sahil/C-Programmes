#include<stdio.h>
int main()
{
	int cp,sp,p,l;
	printf("Enter cost price: ");
	scanf("%d",&cp);
	printf("Enter selling price: ");
	scanf("%d",&sp);
	if(cp<sp)
	{
		p=sp-cp;
		printf("The seller is in profit.\n ");
		printf("Profit of %d ",p);
	}
	else if(cp>sp)
	{
		l=cp-sp;
		printf("The seller is in loss.\n ");
		printf("Loss of %d ",l);
	}
	else
		printf("NO PROFIT NO LOSS");
}
