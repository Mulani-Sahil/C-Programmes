#include<stdio.h>
int main()
{
 	 int a[100],i,n;
	 printf("Enter the limit: ");
	 scanf("%d",&n);
	 printf("Enter Any %d numbers:",n);
	 for(i=0;i<n;i++)
	  {
		scanf("%d",&a[i]);
	  }
	printf("The Numbers are..\n");
	for(i=0;i<n;i++)
	  {
		printf("%d\n",a[i]);
	  }
}
