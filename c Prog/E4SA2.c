#include<stdio.h>
int main()
{
	int a,b,c;
	char ch;
	printf("Enter your choice among the following\n +(addition)\n -(substraction)\n *(multiplication)\n /(division)\n");
	scanf("%c",&ch);
	printf("Enter the numbers : ");
	scanf("%d%d",&a,&b);
	switch(ch)
	{
	case '+':c=a+b;
		printf("\n addition=%d",c);
	break;
	case '-':c=a-b;
		printf("\n substraction=%d",c);
		break;
	case '*':c=a*b;
		printf("\n multiplication=%d",c);
		break;
	case '/':c=a/b;
		printf("\n division=%d",c);
		break;
	default : printf("Enter Invalid Character....");			 	
	}
} 
