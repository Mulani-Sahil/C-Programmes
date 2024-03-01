
#include<stdio.h>
int main()
{
	char ch;

	printf("Enter the character: ");
	scanf("%c",&ch);
	printf("Character is=%c\n",ch);
	printf("Ascii Value: %d\n",ch);
	printf("Next Character is=%c\n",ch+1);
	printf("Previuous Character is=%c\n",ch-1);
}
