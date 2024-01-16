//MODULE: 4_OOPS Concept_Inheritance Polymorphism
/*Question:4_Write a C++ Program display Student Mark sheet using Multiple inheritance*/

#include <iostream>
#include <string>
using namespace std;

class Person 
{
	protected:
    	string name;

	public:
    void initializePerson(string n) 
	{
        name = n;
    }

    void readPerson() 
	{
        cout<<"Enter name: ";
        cin>>name;
    }

    void writePerson()
	{
        cout<<"Name: "<<name<<endl;
    }
};

class Marks 
{
	protected:
  		float marks[5];

	public:
    void initializeMarks() 
	{
        cout<<"Enter marks for 5 subjects:"<<endl;
        for(int i = 0; i < 5; ++i) 
		{
            cout<<"Subject "<<i + 1<<": ";
            cin>>marks[i];
        }
    }

    void writeMarks()
	{
        cout<<"Marks:"<<endl;
        for(int i = 0; i < 5; ++i)
		{
            cout<<"Subject "<<i + 1<<": "<<marks[i]<<endl;
        }
    }
};

class Student:public Person, public Marks
{
	public:
    void initializeStudent() 
	{
        readPerson();    
        initializeMarks(); 
    }

    void displayMarkSheet()
	{
        cout<<"\nStudent Mark Sheet:"<<endl;
        writePerson(); 
        writeMarks();
    }
};

int main() 
{
    Student student;
    cout<<"Enter student details:"<<endl;
    student.initializeStudent();
    student.displayMarkSheet();

    return 0;
}

