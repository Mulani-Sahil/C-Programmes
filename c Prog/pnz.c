#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number: ");
	scanf("%d",&n);
	if(n>0)
		printf("The Number is Positive");
	else if(n<0)
		printf("The Number is Negative");
	else
		printf("The number is zero");
}
