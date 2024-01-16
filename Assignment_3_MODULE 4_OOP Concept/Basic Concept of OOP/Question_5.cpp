//MODULE: 4_OOPS Concept_Basic Concepts of OOP
/*Question:5_Write a C++ program to create a class called Rectangle that has private member variables for length and width. 
			Implement member functions to calculate the rectangle's area and perimeter.*/
			
#include<iostream>
#include<string>
using namespace std;

class Rectangle{
		private:
			double length;
			double width;
		public:
			void s_length(double l)
						{
							length=l;
						}
			void s_width(double w)
						{
							width=w;
						}
			double Area()
				{
					return length*width;	
				}
			double Perimeter()
				{
					return (2*length)+(2*width);
				}
};

int main()
{
	Rectangle rect;
	double u_length, u_width;
	cout<< "Enter the Length of Rectangle: ";
	cin >> u_length;
	cout<<"Enter the Width of Rectangle: ";
	cin>> u_width;
	
	rect.s_length(u_length);
	rect.s_width(u_width);
	cout<<"Area of Rectanle: "<<rect.Area()<<endl;
	cout<<"Area of Rectanle: "<<rect.Perimeter()<<endl;

	return 0;
}


