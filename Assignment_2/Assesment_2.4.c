#include<stdio.h>
int main()
{
	int option;
	float P,R,T,SI,TA;
	printf("_____Calculator for Simple Interest_____");
	printf("\nSelect what do you want to find:\n(1)Simple Interest\t(2)Principle Amount\t(3)Rate\t(4)Time\n");
	scanf("%d",&option);
	switch(option)
{
	case (1)://FOR SIMPLE INTEREST
		printf("\nEnter Principle Amount:");
		scanf("%f",&P);
		printf("\nEnter Rate:");
		scanf("%f",&R);
		printf("\nEnter Time:");
		scanf("%f",&T);
		printf("\nFor %f with %f rate %& %f time\nSimple Interest=%f",P,R,T,SI=(P*R*T)/100);
		printf("\tTotal Amount=%f",TA=P+SI);
	    break;
	case (2)://FOR PRINCIPLE AMOUNT
		printf("\nEnter Simple Interest:");
		scanf("%f",&SI);
		printf("\nEnter Rate:");
		scanf("%f",&R);
		printf("\nEnter Time:");
		scanf("%f",&T);
		printf("\nFor %f sipmle interest with %f rate %& %f time\nPrinciple Amount=%f",SI,R,T,P=(SI*100)/(R*T));
		printf("\tTotal Amount=%f",TA=P+SI);
		break;
	case (3)://FOR RATE
	    printf("\nEnter Principle Amount:");
		scanf("%f",&P);
		printf("\nEnter Simple Interest:");
		scanf("%f",&SI);
		printf("\nEnter Time:");
		scanf("%f",&T);
		printf("\nFor %f priciple amount with %f simple interest %& %f time\nRate=%f",P,SI,T,R=(SI*100)/(P*T));
		printf("\tTotal Amount=%f",TA=P+SI);
		break;
		
	case (4)://FOR TIME
		printf("\nEnter Principle Amount:");
		scanf("%f",&P);
		printf("\nEnter Simple Interest:");
		scanf("%f",&SI);
		printf("\nEnter Rate:");
		scanf("%f",&R);
		printf("\nFor %f principle amount with %f simple interest %& %f rate\nTime=%f",P,SI,R,T=(SI*100)/(P*R));
		printf("\tTotal Amount=%f",TA=P+SI);
		break;
	default:
		printf("You Entered something wrong.");
		break;
		
	}	
return(0);	
}
