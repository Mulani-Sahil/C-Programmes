//Write ‘C’ program to accept a single digit number and display it in words. For example, Input = 9 Output = Nine//
#include<stdio.h>
int main()
{
	int d;
	printf("Enter a digit: ");
	scanf("%d",&d);
	switch(d)
	{
	case 1:printf("one");
	break;
	case 0:printf("zero");
	break;
	case 2:printf("two");
	break;
	case 3:printf("three");
	break;	
	case 4:printf("four");
	break;	
	case 5:printf("five");
	break;	
	case 6:printf("six");
	break;	
	case 7:printf("seven");
	break;	
	case 8:printf("eight");
	break;		
	case 9:printf("nine");
	break;		
	default :printf("Invalid Digit.........");

	}
}
