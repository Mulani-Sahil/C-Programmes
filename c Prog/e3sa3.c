#include<stdio.h>
int main()
{
	char ch;
	printf("Enter the Character: ");
	scanf("%c",&ch);
	if(ch>='0' && ch<='9')
		printf("The Character is digit ");
	else
		printf("The Character is not a digit ");
}
