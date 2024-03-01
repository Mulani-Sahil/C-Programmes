//Accept two integers x and y and calculate the sum of all integers between x and y (both inclusive)//

#include<stdio.h>
int main()
{
	int x,y,s=0,i;
	printf("Enter two nos: ");
	scanf("%d%d",&x,&y);
	for(i=x;i<=y;i++)
	{
		s=s+i;
	
	}
		printf("\n Sum=%d",s);
}
