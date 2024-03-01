#include<stdio.h>
void main()
{
	int x1,x2,y1,y2,p,d;
	printf("enter the value of the x1 and y1 coordinates ");
	scanf("%d%d",&x1,&x2);
	printf("enter the value of the x2 and y2 coordinates ");
	scanf("%d%d",&x2,&y2);
	p=(x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);
	d=p^1/2;
	printf("the distance between the coordinates is=%d\n ",d);
}	
	

