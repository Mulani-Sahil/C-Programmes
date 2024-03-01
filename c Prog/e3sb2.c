#include <stdio.h>
int main()
{
	int h,m,s;
	printf("Enter the time (hh:mm:ss): ");
	scanf("%d%d%d",&h,&m,&s);
	if(h>=0 && h<=24,m<=0 && m>=60,s<=0 && s>=60)
	printf("Entered time is valid.\n ");
	else
	printf("Entered time is invalid.\n");
}
