//MODULE: 4_OOPS Concept_Inheritance Polymorphism
/*Question:2_Write a C++ Program to find Area of Rectangle using inheritance.*/

#include <iostream>
using namespace std;

class Shape 
{
	public:
    double calculateArea;
    double Shape; 

};

class Rectangle:public Shape
{
	private:
    	double length, width;
	public:
    Rectangle(double l, double w):length(l), width(w) {}

    double calculateArea()
		{
        	return length*width;
    	}
};

int main() {
    double length, width;

    cout<<"Enter length of the rectangle: ";
    cin>>length;

    cout<<"Enter width of the rectangle: ";
    cin>>width;

    Rectangle rectangle(length, width);

    cout<<"Area of the rectangle: "<<rectangle.calculateArea()<<endl;
    return 0;
}

