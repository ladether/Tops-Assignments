//MODULE: 4_OOPS Concept_Inheritance Polymorphism
/*Question:10_Write a program to concatenate the two strings using Operator Overloading.*/


#include <iostream>
#include <cstring>
using namespace std;

class Concatenator 
{
	private:
    	char *concatenatedString;

	public:
        Concatenator(const char *str1, const char *str2) 
		{
        concatenatedString = new char[strlen(str1) + strlen(str2) + 1];
        strcpy(concatenatedString, str1);
        strcat(concatenatedString, str2);
    	}

        void display()
		{
        cout<<"Concatenated String: "<<concatenatedString<<endl;
    	}

        ~Concatenator() 
		{
        delete[] concatenatedString;
    	}
};

int main() 
{
    const char *string1 = "Hello, ";
    const char *string2 = "world!";

    Concatenator concatenator(string1, string2);
    concatenator.display();

    return 0;
}

