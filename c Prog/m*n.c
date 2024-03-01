//Accept m*n matrix and disply//
#include<stdio.h>
int main()
{
	int a[10][10],i,j,r,c;
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
			printf("%d\t",a[i][j]);
		}
	printf("\n");
	}
}
