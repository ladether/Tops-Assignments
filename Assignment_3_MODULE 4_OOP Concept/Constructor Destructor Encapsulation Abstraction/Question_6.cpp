//MODULE: 4_OOPS Concept_Constructor Destructor Encapsulation Abstraction
/*Question:6_Write a C++ program to implement a class called Employee that has private member variables for name, employee ID, and salary. 
		Include member functions to calculate and set salary based on employee performance. 
		Using of constructor.*/
		
#include <iostream>
#include <string>
using namespace std;

class Employee 
{
	private:
    	string name;
    	int employeeID;
    	double salary;

	public:
    Employee(string empName, int empID, double iniSalary) 
		{
        	name=empName;
        	employeeID=empID;
        	salary=iniSalary;
    	}

    void setSalary(double performance)
		{
        	if (performance>= 0.0 && performance<= 100.0)
			 {
            	salary=salary*(1 + performance/100.0);
            	cout<<"Salary based on performance. New salary: " <<salary<<endl;
        	}			 
			else
			{
            	cout<<"Please enter a score between 0 and 100."<<endl;
        	}
		}
    string getName()
		{
    	    return name;
    	}

    int getEmployeeID()
		{
        	return employeeID;
    	}

    double getSalary()
		{
    	    return salary;
   		}
};

int main()
{
    string empName;
    int empID;
    double iniSalary;

    cout<<"Enter Employee Name: ";
    getline(cin, empName);

    cout<<"Enter Employee ID: ";
    cin>>empID;

    cout<<"Enter Initial Salary: $";
    cin>>iniSalary;

    Employee e1(empName, empID, iniSalary);

    cout<<"\nEmployee Information:"<<endl;
    cout<<"Name: "<<e1.getName()<<endl;
    cout<<"Employee ID: "<<e1.getEmployeeID()<<endl;
    cout<<"Initial Salary: "<<e1.getSalary()<<endl;

    double performance;
    cout<<"\nEnter Performance Score from 0 to 100: ";
    cin>>performance;
    e1.setSalary(performance);

    cout<<"\nFinal Employee Information:"<<endl;
    cout<<"Name: "<<e1.getName()<<endl;
    cout<<"Employee ID: "<<e1.getEmployeeID()<<endl;
    cout<<"Final Salary: "<<e1.getSalary()<<endl;

    return 0;
}

