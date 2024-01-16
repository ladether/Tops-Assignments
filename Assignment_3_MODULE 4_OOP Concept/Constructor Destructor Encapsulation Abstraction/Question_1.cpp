//MODULE: 4_OOPS Concept_Constructor Destructor Encapsulation Abstraction
/*Question:1_Write a program to find the multiplication values and the cubic values using inline function.*/

#include<iostream>
using namespace std;
inline double multiply(double a, double b)
		{
			return a*b;
		}
inline double cubic(double c)
	{
		return c*c*c;
	}
int main()
{
	double num1, num2, num3;
	
	cout << "Enter two numbers to multiply:  ";
	cin>>num1>>num2;
	
	cout<<"Enter number to find cubic: ";
	cin>>num3;
	
	cout<<"\n____Result____\n";
	double R_multiplication=multiply(num1, num2);
	cout<<"Multiplication of two Numbers: "<<R_multiplication<<endl;
	
	double R_cubic=cubic(num3);
	cout<<"Cubic of Number: "<<R_cubic;
	
	return 0;
}
