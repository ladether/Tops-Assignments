//MODULE: 4_OOPS Concept_Inheritance Polymorphism
/*Question:8_Write a program to Mathematic operation like Addition, Subtraction, Multiplication, Division Of 
			two number using different parameters and Function Overloading*/
			
#include <iostream>
using namespace std;

class MathOperations 
{
	public:
    int operate(int a, int b) 
	{
        return a + b;
    }

    float operate(float a, float b) 
	{
        return a + b;
    }

    int operate(int a, int b, int c) 
	{
        return a - b - c;
    }

    int operate(int a, int b, int c, int d) 
	{
        return a * b * c * d;
    }

    float operate(float a, float b, float c) 
	{
        if (b != 0 && c != 0) 
		{
            return a / (b * c);
        } 
		else
		{
            cout<<"Cannot divide by zero. Returning 0."<<endl;
            return 0;
        }
    }
};

int main() 
{
    MathOperations math;
    int intOperand1, intOperand2;
    cout<<"Enter two integers for addition: ";
    cin>>intOperand1>>intOperand2;
    cout<<"Addition (int): "<<math.operate(intOperand1, intOperand2)<<endl;

    float floatOperand1, floatOperand2;
    cout<<"Enter two floating-point numbers for addition: ";
    cin>>floatOperand1>>floatOperand2;
    cout<<"Addition (float): "<<math.operate(floatOperand1, floatOperand2)<<endl;

    int intOperand3, intOperand4, intOperand5;
    cout<<"Enter three integers for subtraction: ";
    cin>>intOperand3>>intOperand4>>intOperand5;
    cout<<"Subtraction: "<<math.operate(intOperand3, intOperand4, intOperand5)<<endl;

    int intOperand6, intOperand7, intOperand8, intOperand9;
    cout<<"Enter four integers for multiplication: ";
    cin>>intOperand6>>intOperand7>>intOperand8>>intOperand9;
    cout<<"Multiplication: "<<math.operate(intOperand6, intOperand7, intOperand8, intOperand9)<<endl;

    float floatOperand3, floatOperand4, floatOperand5;
    cout<<"Enter three floating-point numbers for division: ";
    cin>>floatOperand3>>floatOperand4>>floatOperand5;
    cout<<"Division: "<< math.operate(floatOperand3, floatOperand4, floatOperand5)<<endl;

    return 0;
}

