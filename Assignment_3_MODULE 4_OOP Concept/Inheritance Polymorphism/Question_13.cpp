//MODULE: 4_OOPS Concept_Inheritance Polymorphism
/*Question:13_Write a program to find the max number from given two numbers using friend function.*/

#include <iostream>
using namespace std;

class MaxFinder 
{
	private:
    int num1, num2;

	public:
    MaxFinder(int a, int b) : num1(a), num2(b) {}

    friend int findMax(const MaxFinder&);

    void displayNumbers()
	{
    cout<<"Numbers: "<<num1<<" and "<<num2<<endl;
    }
};

int findMax(const MaxFinder &mf) 
{
    int maxNumber = (mf.num1 > mf.num2) ? mf.num1 : mf.num2;
    return maxNumber;
}

int main() 
{
    int a, b;

    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;

    MaxFinder mf(a, b);

    mf.displayNumbers();

    int maxNumber = findMax(mf);
    cout<<"Maximum number: "<<maxNumber<<endl;

    return 0;
}

