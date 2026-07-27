#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,num;
	int sum=0;
	printf("Sum of Digits\n");
	printf("**************\n");
	printf("Enter a number:");
	scanf("%d",&num);
	while (num>0)
	{
	
  		n=num%10;
  		sum+=n;
  		num/=10;
}

printf("sum of digits:%d",sum);

}
