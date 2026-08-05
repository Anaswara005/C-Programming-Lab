//Conditional or Ternary Operator (?:) in C 
#include <stdio.h>
#include<conio.h>
void main()
{
    int m = 5, n = 4;
    printf("Conditional or Ternary Operator (?:) in C ");
    printf("\n*****************************************\n");
    printf("m=5,n=4\n");

    (m > n) ? printf("m(%d) is greater than n(%d)", m, n)
            : printf("n(%d) is greater than m(%d)", n, m);


}
