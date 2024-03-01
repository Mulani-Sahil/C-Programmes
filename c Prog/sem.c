//Accept m*n matrix and display sum of even numbers//
#include<stdio.h>
int main()
{
	int a[10][10],i,j,r,c,s=0;
	printf("Enter how much rows and columns:\n");
	scanf("%d%d",&r,&c);
	printf("Enter the matrix:\n ");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Display matrix\n\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		if(a[i][j]%2==0)
		s=s+a[i][j];

		}


	}
	printf("\n Sum of even numbers=%d",s);

}
