//Arithmetic operators
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	printf("Arithmetic operators");
	printf("\n*******************\n");
	printf("Enter two numbers:");
	scanf("%d%d",&a,&b);
	c=a + b;
	printf("a+b=%d\n",c);
	
	c=a-b;
	printf("a-b=%d\n",c);
	
	c=a*b;
	printf("a*b=%d\n",c);
	
	c=a/b;
	printf("a/b=%d\n",c);
	
	c=a%b;
	printf("a%%b=%d\n",c);
}
