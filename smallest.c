//smallest of 3 numbers

#include<conio.h>
#include<stdio.h>
void main()
{
	int a,b,c;
	printf("enter 3 numbers:");
	scanf("%d%d%d",&a,&b,&c);
	if(a<b&&a<c)		
	{
		printf("smallest number is:%d",a);
	}
	else if (b<a&&b<c)
	{
		printf("smallest number is:%d",b);
	}
	else 
	{
		printf("smallest number is:%d",c);
	}
	
}
