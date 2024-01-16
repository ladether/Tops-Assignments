//MODULE: 4_OOPS Concept_Constructor Destructor Encapsulation Abstractions
/*Question:2_Write a program of Addition, Subtraction, Division, Multiplication using constructor.*/

#include<iostream>
using namespace std;

class Calculation
	{	
		private:
			double operand1, operand2;
		
		public:
			Calculation(double num1, double num2)
		{
			operand1=num1;
			operand2=num2;
		}
		
		double add()
			{
				return operand1+operand2;
			}
		double sub()
			{
				return operand1-operand2;
			}
		double multiplication()
			{
				return operand1*operand2;
			}
		double division()
			{
				if(operand2!=0)
					{
						return operand1/operand2;
					}
				else
					{
						return 0.0;
					}
			}
	};	
	
	int main(){
		double num1, num2;
		cout<<"Enter First Number:";
		cin>>num1;
		cout<<"Enter Second Number:";
		cin>>num2;
		
		Calculation cal(num1, num2);
		cout<<"Addition of two Number: "<<cal.add()<<endl;
		cout<<"Subtraction of two Number: "<<cal.sub()<<endl;
		cout<<"Multiplication of two Number: "<<cal.multiplication()<<endl;
		cout<<"Division of two Number: "<<cal.division()<<endl;
	}
	
	
