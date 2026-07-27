//prgm to accpet student roll.no,marks in 3 subject ,calculate total average and grade 

#include<conio.h>
#include<stdio.h>
void main()
{
    int rollno;
	float a,b,c,avg;
	char name[30];
	printf("Student Marks And Details\n");
	printf("********************\n");
	printf("Enter student roll.no:");
	scanf("%d",&rollno);
	printf("\nEnter student name:");
	scanf("%s",&name);  
	printf("\nMark in Maths out of 100:");
	scanf("%f",&a);
	printf("\nMark in Computer out of 100:");
	scanf("%f",&b);
	printf("\nMark in Statistics out of 100:");
	scanf("%f",&c);
	avg=(a+b+c)/3;
	printf("\nAverage Mark:%f",avg);

	if(avg>=70&& avg<=100)
	{
		if(avg>=80)
		{
			printf("\nGrade A");
		}
		else
		{
			 printf("\nGrade B");
		}
	}
	
		
	if(avg<=70 && avg>50)
    {
    	if (avg>=60)
    	{
    		printf("\nGrade C");
		}
		else
		{
			printf("\nGrade D");
		}
	}
          
	if(avg<=50)
	{
		printf("\nFailed");
	}
	
	if (avg>100)
	{
		printf("\ninvalid....enter marks out 100");
	}

	printf("\n***************");
	printf("\nStudent Details");
	printf("\n***************");
	printf("\nStudent roll.no:%d",rollno);
	printf("\nStudent name:%s",name);
	printf("\nMark in Maths:%f",a);
	printf("\nMark in Computer:%f",b);
	printf("\nMark in Statistics:%f",c);
	printf("\nAverage Mark:%f",avg);

	
		
}
