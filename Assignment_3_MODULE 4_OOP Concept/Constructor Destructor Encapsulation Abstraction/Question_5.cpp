//MODULE: 4_OOPS Concept_Constructor Destructor Encapsulation Abstraction
/*Question:5_Write a C++ program to create a class called Triangle that has private member variables for the lengths of its three sides. 
			Implement member functions to determine if the triangle is equilateral, isosceles, or scalene.*/
			
#include<iostream>
using namespace std;

class Triangle{
	private:
		double length1, length2, length3;
	public:
		Triangle(double l1, double l2, double l3):length1(l1), length2(l2), length3(l3){}
		
	bool triEquilateral()
		{
			return (length1==length2 && length2==length3);
		}
	bool triIsosceles()
		{
			return (length1==length2||length1==length3||length2==length3);
		}
	bool triScalence()
		{
			return (length1!=length2 && length2!=length3 && length1!=length3);
		}	
};
int main()
{
	double length1, length2, length3;
	cout<<"Enter length of Triangle side1: ";
	cin>>length1;
	cout<<"Enter length of Triangle side2: ";
	cin>>length2;
	cout<<"Enter length of Triangle side3: ";
	cin>>length3;
	
	Triangle triangle1(length1, length2, length3);
	
	if(triangle1.triEquilateral())
		{
			cout<<"The Triangle is Equilateral."<<endl;
		}
	else if(triangle1.triIsosceles())
		{
			cout<<"The Triangle is Isosceles."<<endl;
		}	
	else if(triangle1.triScalence())
		{
			cout<<"The Triangle is Scalence."<<endl;
		}
return 0;
}
