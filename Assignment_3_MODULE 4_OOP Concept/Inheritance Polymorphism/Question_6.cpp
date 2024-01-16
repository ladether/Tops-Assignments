//MODULE: 4_OOPS Concept_Inheritance Polymorphism
/*Question:6_Write a C++ Program to show access to Private Public and Protected using Inheritance.*/

#include <iostream>
using namespace std;

class Base 
{
	private:
    	int privateMember;

	protected:
    	int protectedMember;

	public:
    	int publicMember;
    	
    Base(int privateVal, int protectedVal, int publicVal)
        :privateMember(privateVal), protectedMember(protectedVal), publicMember(publicVal) {}

    void display()
	{
        cout<<"Private Member: "<<privateMember<<endl;
        cout<<"Protected Member: "<<protectedMember<<endl;
        cout<<"Public Member: "<<publicMember<<endl;
    }
};

class Derived:public Base 
{
	public:
        Derived(int privateVal, int protectedVal, int publicVal)
        :Base(privateVal, protectedVal, publicVal) {}

    void accessAndDisplay() 
	{
        cout<<"Accessing Public Member from Derived: "<<publicMember<<endl;

        cout<<"Accessing Protected Member from Derived: "<<protectedMember<<endl;

    }
};

int main() 
{
    Derived derivedObj(1, 2, 3);

    cout<<"Displaying Members from Derived Class:"<<endl;
    derivedObj.accessAndDisplay();

    cout<<"\nDisplaying Members from Base Class:"<<endl;
    derivedObj.display();

    return 0;
}

