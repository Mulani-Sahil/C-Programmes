//Accept any year as input through the keyboard. Write a program to check whether the year is a leap year or not. (Hint leap year is divisible by 4 and not by 100 or divisible by 400)//
#include<stdio.h>
int main()
{
	int y;
	printf("Enter Year of your choice: ");
	scanf("%d",&y);
	if(y%4==0)
		printf("Year is leap ");
	else
		printf("Year is not a leap year");
		
}


