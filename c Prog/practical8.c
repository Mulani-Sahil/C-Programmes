#include<stdio.h>
int main()
{
	char c;
	printf("Enter any character ");
	scanf("%c",&c);
	
	// %d displays the integer value of a character
	// %c displays the actual character
	printf("ASCII value of %c = %d\n ", c,c);
	
	return 0;
}
	
