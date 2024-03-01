#include<stdio.h>
int main()
{
	int i,x,y,s=0;
	printf("Enter the value of x and y ");
	scanf("%d%d",&x,&y);
	for(i=x;i<=y;i++)
	{
		s=s+i;
	}
	printf("THE SUM OF NUMBERS BETWEEN THEM IS=%d ",s);
}
