//7. Write a program to accept a character, an integer n and display the next n characters.//
#include<stdio.h>
int main()
{
	char ch;
	int n,i;
	printf("Enter the character: ");
	scanf("%c",&ch);
	printf("Enter the limit");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("\n%c",ch++);
	}

}
