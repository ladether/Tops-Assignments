//MODULE: 4_OOPS Concept_Inheritance Polymorphism
/*Question:5_Assume that the test results of a batch of students are stored in three different classes. 
			Class Students are storing the roll number. 
			Class Test stores the marks obtained in two subjects and class result contains the total marks obtained in the test. 
			The class result can inherit the details of the marks obtained in the test and roll number of students.(Multilevel Inheritance)*/
			
#include <iostream>
#include <string>
using namespace std;

class Student 
{
	protected:
    	int rollNumber;

	public:
        void initializeStudent(int roll) 
		{
        	rollNumber = roll;
    	}

        void displayRollNumber()
		{
        	cout<<"Roll Number: "<<rollNumber<<endl;
    	}
};

class Test:public Student 
{
	protected:
   		float subject1Marks;
    	float subject2Marks;

	public:
    void initializeTest(float marks1, float marks2) 
	{
        subject1Marks=marks1;
        subject2Marks=marks2;
    }

    void displayTestMarks()
	{
        cout<<"Subject 1 Marks: "<<subject1Marks<<endl;
        cout<<"Subject 2 Marks: "<<subject2Marks<<endl;
    }
};

class Result:public Test 
{
	private:
    	float totalMarks;

	public:
    void calculateTotalMarks() 
	{
        totalMarks=subject1Marks+subject2Marks;
    }
    void displayResult()
	{
        displayRollNumber();     
        displayTestMarks(); 
        cout<<"Total Marks: "<<totalMarks<<endl;
    }
};

int main()
{
    Result studentResult;
    cout<<"Enter student details:"<<endl;
    int roll;
    cout<<"Roll Number: ";
    cin>>roll;
    studentResult.initializeStudent(roll);
    
    cout<<"\nEnter test marks:"<<endl;
    float marks1, marks2;
    cout<<"Subject 1 Marks: ";
    cin>>marks1;
    cout<<"Subject 2 Marks: ";
    cin>>marks2;
    studentResult.initializeTest(marks1, marks2);

    studentResult.calculateTotalMarks();
    cout<<"\nStudent Result:"<<endl;
    studentResult.displayResult();

    return 0;
}

