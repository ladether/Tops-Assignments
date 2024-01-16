//MODULE: 4_OOPS Concept_Constructor Destructor Encapsulation Abstraction
/*Question:3_Write a C++ program to create a class called Car that has private member variables for company, model, and year. 
			Implement member functions to get and set these variables.*/

#include<iostream>
#include<string>
using namespace std;

class Car
{
	private:
		string company, model, year;
	public:
		void s_company(string c)
			{
				company=c;
			}
		void s_model(string m)
			{
				model=m;
			}
		void s_year(string y)
			{
				year=y;
			}
		string getcompany()
			{
				return company;
			}
		string getmodel()
			{
				return model;
			}
		string getyear()
			{
				return year;
			}
};
int main()
{
	Car c1;
	string u_company, u_model, u_year;
	cout<<"Enter the Company Name: ";
	getline(cin, u_company);
	cout<<"Enter the Car Model: ";
	getline(cin, u_model);
	cout<<"Enter the Year: ";
	getline(cin, u_year);
	
	c1.s_company(u_company);
	c1.s_model(u_model);
	c1.s_year(u_year);
	cout<<"Car Company: "<<c1.getcompany()<<endl;
	cout<<"Car Model: "<<c1.getmodel()<<endl;
	cout<<"Year: "<<c1.getyear();
	
	return 0;
}
