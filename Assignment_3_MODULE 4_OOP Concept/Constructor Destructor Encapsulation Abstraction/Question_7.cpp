//MODULE: 4_OOPS Concept_Constructor Destructor Encapsulation Abstraction
/*Question:7_Write a C++ program to implement a class called Date that has private member variables for day, month, and year. 
			Include member functions to set and get these variables, as well as to validate if the date is valid.*/
			

#include <iostream>
using namespace std;

class Date
{
	private:
    	int day, month, year;
	public:
    	Date(int d, int m, int y) : day(d), month(m), year(y) {}

    void setDate(int d, int m, int y)
	 	{
        		if (validDate(d, m, y)) 
				{
            		day = d;
            		month = m;
            		year = y;
        		}
				else
				{
            		cout << "Invalid date!" << endl;
        		}
    	}		

    int getDay()
		{
        	return day;
    	}

    int getMonth()
		{
        	return month;
    	}

    int getYear()
		{
        	return year;
    	}

private:
    bool validDate(int d, int m, int y)
	{
        if (m < 1 || m > 12 || d < 1 || d > 31) 
		{
            return false;
        }

        if ((m == 4 || m == 6 || m == 9 || m == 11) && (d > 30))
		{
            return false;
        }

        if (m == 2) 
			{
            		if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
					 {
                		if (d > 29)
						 {
                    		return false;
                		}
            } 
		else
		 	{
                if (d > 28)
				{
                    return false;
                }
            }
        }

        return true;
    }
};

int main() {
    int userDay, userMonth, userYear;

    cout<<"Enter day: ";
    cin>>userDay;

    cout<<"Enter month: ";
    cin>>userMonth;

    cout<<"Enter year: ";
    cin>>userYear;

    Date myDate(01, 01, 2024);
    myDate.setDate(userDay, userMonth, userYear);

    cout << "Day: " << myDate.getDay() << endl;
    cout << "Month: " << myDate.getMonth() << endl;
    cout << "Year: " << myDate.getYear() << endl;

    return 0;
}

