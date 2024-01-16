//MODULE: 4_OOPS Concept_Basic Concepts of OOP
/*Question:4_Write a C++ program to implement a class called Circle that has private member variables for radius. 
			Include member functions to calculate the circle's area and circumference.*/
			
#include<iostream>
#include<string>
using namespace std;

class Circle{
			private:
				double radius;
			public:
				void setRadius(double r){
					if(r>=0)
					{
						radius=r;
					}
					else
					{
						cout<<"Radius cannot be Negative.";
					}
				}
			double Area(){
				return 3.14*radius*radius;
			}
			double Circumference(){
				return 2*3.14*radius;
			}
};

int main()
{
	Circle circle1;
	double userRadius;
	cout << "Enter radius of Circle: ";
	cin >> userRadius;
	
	circle1.setRadius(userRadius);
	cout<<"Area of circle: "<<circle1.Area()<<endl;
	cout<<"Circumference of circle: "<<circle1.Circumference()<<endl;
	return 0;
}

