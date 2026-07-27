//area and perimeter of reactangle

#include<conio.h>
#include<stdio.h>
void main()
{
	int l,b,area ,perimeter;
	printf("RECTANGLE\n");
	printf("**********\n");
	printf("enter length:");
	scanf("%d",&l);
	printf("enter breadth:");
	scanf("%d",&b);
	area=l*b;
	perimeter=2*(l+b);
	printf("area=%d",area);
	printf("\nperimeter=%d",perimeter);
	
}
