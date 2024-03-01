e3s#include<stdio.h>
void main()
{
	char ch;
	printf("Enter the Character ");
	scanf("%c",&ch);
	if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U')
		printf("The Character is Vowel");
	else
		printf("The Character is consonant");
}

