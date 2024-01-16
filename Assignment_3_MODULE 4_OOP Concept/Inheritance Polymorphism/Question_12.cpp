//MODULE: 4_OOPS Concept_Inheritance Polymorphism
/*Question:12_Write a program to swap the two numbers using friend function without using third variable.*/

#include <iostream>
using namespace std;

class NumberSwapper 
{
	private:
    	int num1, num2;

	public:
        NumberSwapper(int a, int b) : num1(a), num2(b) {}

    friend void swapNumbers(NumberSwapper&);

	void displayNumbers()
	{
        cout<<"Numbers after swapping: "<<num1<<" and "<<num2<<endl;
    }
};

void swapNumbers(NumberSwapper &ns)
{
    ns.num1 = ns.num1 + ns.num2;
    ns.num2 = ns.num1 - ns.num2;
    ns.num1 = ns.num1 - ns.num2;
}

int main() 
{
    int a, b;

    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;

    NumberSwapper ns(a, b);

    cout<<"\nOriginal numbers: "<<a<<" and "<<b<<endl;

    swapNumbers(ns);

    ns.displayNumbers();

    return 0;
}

