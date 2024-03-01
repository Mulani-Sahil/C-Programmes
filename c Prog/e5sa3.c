//3. Write a program to accept two integers x and n and compute x n//
#include<stdio.h>
#include<math.h>
int main()
{
	int x,n,p,i;
	printf("Enter the value of x and n: ");
	scanf("%d%d",&x,&n);
	for(i=1;i<=n;i++)
	{
		p=pow(x,i);
		printf("\n%d",p);
	}
	
}

