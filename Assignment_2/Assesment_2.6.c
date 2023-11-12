#include<stdio.h>
int main()
{
    int option,year,day,month,days;
	printf("Select any one:\n 1. Convert Years into Days. \n 2. Convert Days into Years.\n");
	scanf("\n%d",&option);
	switch (option)
	{
	case(1):
		printf("\nEnter Years:");
		scanf("%d",&year);
		day=year*365;
		printf("\nNumber of Days for %d year=%d",year,day);
		break;
	case(2):
		printf("\nEnter Days:");
		scanf("%d",&day);
		year=day/365;
		month=(day-(year*365))/30;
		days=day-(year*365)-(month*30);
		printf("For %d: \nYear=%d \nMonth=%d \nDay=%d",day,year,month,days);
		break;
		
	default:
		printf("\nYou entered something wrong.");
		break;
	}
	return(0);
}
