#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the three number: ");
	scanf("%d%d%d",&a,&b,&c);
	if(a>=b && a<=c)
		printf("The number is between 2nd and 3rd");
	else
		printf("The Number is not in between the other two");
}
