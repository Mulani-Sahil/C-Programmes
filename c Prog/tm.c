//Accept m*n matrix and display transpose of matrix//
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
	printf("Display transpose matrix\n\n");
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		{
			printf("%d\t",a[j][i]);
		}
	printf("\n");
	}
}
