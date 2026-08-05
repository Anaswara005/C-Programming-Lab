//check whether number is +ve,-ve or 0
#include<conio.h>
#include<stdio.h>
void main()
{
	int a;
	printf("enter a number:\n");
	scanf("%d",&a);
	if(a>0)
	{
		printf("%d is positive number",a);
	}
	else if(a<0)
	{
		printf("%d is negative number",a);
	}
	else
	{
		printf("%d is zero",a);
	}
}
	
