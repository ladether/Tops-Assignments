//MODULE: 4_OOPS Concept_Inheritance Polymorphism
/*Question:1_Assume a class cricketer is declared. Declare a derived class batsman from cricketer.Data member of batsman. 
			Total runs, Average runs and best performance. 
			Member functions input data, calculate average runs, Display data.(Single Inheritance)*/

#include<iostream>
#include<string>
using namespace std;

class Cricketer
{
	protected:
    	string playerName;
    	int matchesPlayed;

	public:
    	void inputCricketerData() 
		{		
        	cout<<"Enter player name: ";
        	getline(cin, playerName);

        	cout<<"Enter matches played: ";
        	cin>>matchesPlayed;
        	cin.ignore(); 
		}	
};

class Batsman:public Cricketer 
{
	private:
    	int totalRuns;
    	double averageRuns;
    	int bestPerformance;

	public:
    void inputBatsmanData() 
	{
        inputCricketerData(); 
        cout<<"Enter total runs: ";
        cin>>totalRuns;

        cout<<"Enter best performance: ";
        cin>>bestPerformance;

        averageRuns = static_cast<double>(totalRuns) / matchesPlayed;
        cin.ignore();
    }

    void displayData() 
	{
        cout<<"Player Name: "<<playerName<<endl;
        cout<<"Matches Played: "<<matchesPlayed<<endl;
        cout<<"Total Runs: "<<totalRuns<<endl;
        cout<<"Average Runs: "<<averageRuns<<endl;
        cout<<"Best Performance: "<<bestPerformance<<endl;
    }
};

int main() {
    Batsman batsman1;

    batsman1.inputBatsmanData();
    cout << "\n_____Batsman Information_____\n";
    batsman1.displayData();

    return 0;
}

