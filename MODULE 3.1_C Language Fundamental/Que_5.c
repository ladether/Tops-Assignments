//Module_3.1 (C Language Fundamental)
//Question_5:WAP to check if the given year is a leap year or not.



#include<stdio.h>
int main()
{
	int year;
	printf("Enter a year to check if it's Leap Year or Not:");
	scanf("%d",&year);
    if (((year % 4 == 0) && (year % 100!= 0)) || (year%400 == 0))
    { 
        printf("\n%d is Leap Year.",year);
	    }
	else
	{
		printf("\n%d is Not Leap Year.",year);
			}
			return(0);
					
}
