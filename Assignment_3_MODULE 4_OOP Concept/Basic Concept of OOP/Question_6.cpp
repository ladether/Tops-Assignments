//MODULE: 4_OOPS Concept_Basic Concepts of OOP
/*Question:6_Write a C++ program to create a class called Person that has private member variables for name, age and country. 
			Implement member functions to set and get the values of these variables.*/
			
#include<iostream>
#include<string>
using namespace std;

class Person
{
	private:
		string name;
		int age;
		string country;
	public:
		void s_name(string n )
			{
				name=n;
			}
		void s_age(int a)
			{
				age=a;
			}
		void s_country(string c)
			{
				country=c;
			}
		string getName(){
			return name;
		}
		int getAge(){
			return age;
		}
		string getCountry(){
			return country;
		}
};

int main()
{
	Person p1;
	int u_age;
	string u_name, u_country;
	
	cout<<"Enter the Name of Person: ";
	getline(cin, u_name);
	
	cout<<"Enter the Age of Person: ";
	cin>>u_age;
	
	cout<<"Enter the Country of Person: ";
	cin.ignore();
	getline(cin, u_country);
	
	p1.s_name(u_name);
	p1.s_age(u_age);
	p1.s_country(u_country);
	cout<<"Name: "<<p1.getName()<<endl;
	cout<<"Age: "<<p1.getAge()<<endl;
	cout<<"Country: "<<p1.getCountry();
	
	return 0;
}
