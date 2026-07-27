//simple interest

#include<conio.h>
#include<stdio.h>
void main()
{
	float  r,I;
	int p,n;
	printf("enter principal amount:");
	scanf("%d",&p);
	printf("no. of year");
	scanf("%d",&n);
	printf("rate of intrest");
	scanf("%f",&r);
	I=(p*n*r)/100;
	printf("simple interset:%f",I);
		
}
