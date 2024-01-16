//MODULE: 4_OOPS Concept_Inheritance Polymorphism
/*Question:3_Create a class person having members name and age. 
			Derive a class student having member percentage. 
			Derive another class teacher having member salary. 
			Write necessary member function to initialize, read and write data.
			Write also Main function (Multiple Inheritance)*/
			
#include <iostream>
#include <string>
using namespace std;

class Person
{
	protected:
    	string name;
    	int age;

	public:
    	void initializePerson(string n, int a)
		{
        	name = n;
        	age = a;
    	}		

    void readPerson() 
		{
        	cout<<"Enter name: ";
        	cin>>name;
        	cout<<"Enter age: ";
        	cin>>age;
	    }

    void writePerson()
		{
        	cout<<"Name: "<<name<<endl;
        	cout<<"Age: "<<age<<endl;
    	}
};

class Student:public Person
{
	private:
    	float percentage;

	public:
    	void initializeStudent(float p) 
		{
        	percentage = p;
    	}

    void readStudent() 
		{
        	readPerson();
        	cout<<"Enter percentage: ";
        	cin>>percentage;
   		}

    void writeStudent()
		{
        	writePerson();
        	cout<<"Percentage: "<<percentage<<"%"<<endl;
    	}
};

class Teacher:public Person 
{
	private:
    	float salary;

	public:
    void initializeTeacher(float s) 
	{
    	salary = s;
    }

    void readTeacher() 
	{
        readPerson();
        cout<<"Enter salary: ";
        cin>>salary;
    }

    void writeTeacher()
	{
        writePerson();
        cout<<"Salary: "<<salary<<endl;
    }
};

int main() 
{
    Student student;
    Teacher teacher;
    cout<<"Enter student details:"<<endl;
    student.readStudent();

    cout<<"\nEnter teacher details:"<<endl;
    teacher.readTeacher();

    cout<<"\nStudent details:"<<endl;
    student.writeStudent();

    cout<<"\nTeacher details:"<<endl;
    teacher.writeTeacher();

    return 0;
}

