#include<stdio.h>
int main()
{
	int Shape;
	float r,l,w,h,b,area;
	printf("Find the Area Circle, Rectangular, Triangle.\n Select shape:\n1.Circle\n2.Rectangle\n3.Triangle\n");
	scanf("%d",&Shape);
	switch (Shape)
{
		case(1):
			printf("You Select : Circle\n");
			printf ("Enter the Radius of circle R=");
			scanf("%f",&r);
			printf("\nArea of Circle with radius %f is %f",r,area=3.14*r*r);
			break;
			
		case(2):
			printf("You Select : Reactagular");
			printf ("\nEnter the Length of Rectangular L=");
			scanf("%f",&l);
			printf ("\nEnter the Width of Rectangular W=");
			scanf("%f",&w);
			printf("\nArea of Rectangular with %f length and %f width is %f",l,w,area=l*w);
			break;
			
		case(3):
			printf("You Select : Triangle\n");
			printf ("Enter the Height of Triangle H=");
			scanf("%f",&h);
			printf ("\nEnter the Base of Triangle B=");
			scanf("%f",&b);
			printf("\nArea of Triangle with %f height and %f base is %f",h,b,area=(h*b)/2);
			break;
		default:
			printf("You Entered something wrong. Please select 1, 2 or 3.");
			break;
			
}
return(0);
	
}
