#include <stdio.h>
int main()
{
    float s1,s2,s3;
    printf("Enter the lengths of three sides of the triangle: ");
    scanf("%f %f %f", &s1, &s2, &s3);
    if ((s1 + s2 > s3) && (s1 + s3 > s2) && (s2 + s3 > s1)) 
    {
        printf("The triangle is valid.\n");
    } 
    else 
    {
        printf("The triangle not valid.\n");
    }
}
	
