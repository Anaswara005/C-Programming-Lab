//switch
#include<conio.h>
#include<stdio.h>
void main()
{
	int a,b,choice;
	printf("enter two numbers:\n");
	scanf("%d%d",&a ,&b);
	printf("Choose your choice\n");
	printf("*****************\n");
	printf("1.Addition\n");
	printf("2.Subtraction\n");
	printf("3.Multiplication\n");
	printf("4.Division\n");
	printf("Enter your choice:");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("Result:%d",a+b);
			break;
		case 2:
			printf("Result:%d",a-b);
			break;
		case 3:
			printf("Result:%d",a*b);
			break;
		case 4:
			printf("Result:%d",a/b);
			break;
		default:
			printf("Invalid choice");
			break;
			
			
	}
   
}
	
