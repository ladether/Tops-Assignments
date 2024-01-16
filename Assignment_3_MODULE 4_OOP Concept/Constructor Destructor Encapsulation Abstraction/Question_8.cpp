//MODULE: 4_OOPS Concept_Constructor Destructor Encapsulation Abstraction
/*Question:8_Write a C++ program to implement a class called Student that has private member variables for name, class, roll number, and marks.
			Include member functions to calculate the grade based on the marks and display the student's information.
			Accept address from each student implement using of aggregation*/
			
#include <iostream>
#include <string>
using namespace std;

class Address {
public:
    string street, city, state, pinCode;   
};

class Student {
private:
    string name, studentClass;
    int rollNumber;
    double marks;
    Address address;

public:
    Student(string n, string sClass, int roll, double m, string street, string city, string state, string pin):name(n), studentClass(sClass), rollNumber(roll), marks(m) 
		{
        	address.street=street;
        	address.city=city;
        	address.state=state;
        	address.pinCode=pin;
    	}

        char calculateGrade()
		{
        	if (marks >= 90)
			 	{
            	return 'A';
        		} 
			else if(marks >= 70)
				{
            	return 'B';
        		}
			else if(marks >=50) 
				{
            	return 'C';
        		}
			else if(marks >= 35) 
				{
            	return 'D';
        		}		 
			else 
				{
            	return 'F';
        		}
   		 }

	void displayInfo()
	{
        cout<<"Name: "<<name<<endl;
        cout<<"Class: "<<studentClass<<endl;
        cout<<"Roll Number: "<<rollNumber<<endl;
        cout<<"Marks: "<<marks<<endl;
        cout<<"Grade: "<<calculateGrade()<<endl;
        cout<<"Address: "<<endl;
        cout<< " "<<address.street<<endl;
        cout<<" "<<address.city<<endl;
        cout<<" "<<address.state<<endl;
        cout<<" "<<address.pinCode<<endl;
    }
};

int main() 
{
    string name, studentClass, street, city, state, pin;
    int rollNumber;
    double marks;

    cout<<"Enter student name: ";
    getline(cin, name);

    cout<<"Enter class: ";
    getline(cin, studentClass);

    cout<<"Enter roll number: ";
    cin>>rollNumber;

    cout<<"Enter marks: ";
    cin>>marks;

    cin.ignore(); 

    cout<<"Enter Address with House No, Street & Area: ";
    getline(cin, street);

    cout<<"Enter city: ";
    getline(cin, city);

    cout<<"Enter state: ";
    getline(cin, state);

    cout<<"Enter Pin code: ";
    getline(cin, pin);

	Student student(name, studentClass, rollNumber, marks, street, city, state, pin);
    cout<<"\n\n_____Student's Information_____\n\n";
	student.displayInfo();

    return 0;
}

