//type conversion 
#include<conio.h>
#include<stdio.h>
void main()
{
	
	int a=10;
	float b=20.5;
	char c='A';
    printf("TYPE CONVERSION\n");
    printf("***************\n");
    printf("Original Values\n");
    printf("***************\n");
    printf("integer value : %d\n",a);
    printf("float value : %f\n",b);
    printf("character is: %c\n",c);
    printf("Conversion\n");
    printf("integer to float:%f\n",(float)a);
    printf("float to integer:%d\n",(int)b);
    printf("char to int:%d\n",(int)c);
    printf("int to char:%c\n",(char)a);
    
    	
}
