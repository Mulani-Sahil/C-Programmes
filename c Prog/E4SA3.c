
#include<stdio.h>
int main()
{
	int a,b,ch,c;
	printf("Enter two numbers : ");
	scanf("%d%d",&a,&b);
	printf("\n 1-Equality\n 2-Less than\n 3-Quotient and reminder\n 4-Range\n 5-swap\n Enter your choice : ");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:if(a==b)
			printf("Two numbers are eqal to each other");
			else
			printf("The numbes are not equal");
			break;
		case 2:if(a<b)
			printf("\n less no=%d",a);
			else
			printf("\n less no=%d",b);
			break;
		case 3:printf("\n Quotient=%d",a/b);
		       printf("\n Reminder=%d",a%b);
		       break;
		case 4:if(a>b)
			printf("\n range=%d",a-b);
			else
			printf("\n range=%d",b-a);
			break;
		case 5:c=a;
		       a=b;
		       b=c;
		       printf("\n first number=%d",a);	
		       printf("\n second number=%d",b);
	}
			
}
