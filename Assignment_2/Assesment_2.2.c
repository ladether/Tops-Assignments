#include<stdio.h>
int main()
{
	int v1, v2;
	char Operation;
	float Result;
	
	printf("_____Calculator for Operation of Two values_____\n\n\n");
	printf("Select an Operator to Perform an Operation:\n + (Addition),\t- (Subtraction),\t* (Multiplication),\t/ (Division),\t%% (Module)\n");
	scanf("%c", &Operation);
	printf("You Select %c\n",Operation);
	printf(" Enter the First value:");
	scanf("%d", &v1);
	printf(" Enter the Second value:");
	scanf("%d", &v2);
	
	if (Operation=='+')
	{
		Result=v1+v2;
		printf("Your Addition of two number is: %d+%d=%f",v1,v2,Result);
	}
        else if (Operation=='-')
	      {
		     Result=v1-v2;
		    printf("Your Subtraction of two number is: %d-%d=%f",v1,v2,Result);
	      }
	else if (Operation=='*')
	{
		Result=v1*v2;
		printf("Your Multiplication of two number is: %d*%d=%f",v1,v2,Result);
	}
	else if (Operation=='/')
	{
		Result=v1/v2;
		printf("Your Division of two number is: %d/%d=%f",v1,v2,Result);
	}
	else if (Operation=='%')
	{
		Result=v1%v2;
		printf("Your Module of two number is: %d%%%d=%f",v1,v2,Result);
	}
	
	else
	{
		printf("You entered wrong input.");
	}
	
return (0);
}
	
