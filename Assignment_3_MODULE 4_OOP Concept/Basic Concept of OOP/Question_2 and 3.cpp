//MODULE: 4_OOPS Concept_Basic Concepts of OOP
/*Question:2 and 3_Define a class to represent a bank account. Include the following members:
	Data Member:
		-Name of the depositor
		-Account Number
		-Type of Account
		-Balance amount in the account
	Member Functions
		-To assign values
		-To deposited an amount
		-To withdraw an amount after checking balance
		-To display name and balance*/

#include<iostream>
#include<string>
using namespace std;

class BankAccount {
					private:
						string depositorName;
						long accountNumber;
						char accountType;
						double balance;
		
					public:
						void assignValues(string name, long accNumber, char acctype, double initialBalance)
						{
							depositorName=name;
							accountNumber=accNumber;
							accountType=acctype;
							balance=initialBalance;
						}
					
					void deposit(double amount)
							{
								balance=balance+amount;
								cout<<"Deposit successful. New Balance:"<<balance<<endl;
							}		
					void withdraw(double amount)
							{
								if(amount<=balance)
									{
										balance=balance-amount;
										cout<<"Withdrawal successul. New Balance: "<<balance<<endl;
									}
								else
									{
										cout<<"Insufficient Fund."<<endl;
									}
							}	
					void displayInfo()
						{
							cout<<"Depositor Name: "<<depositorName<<endl;
							cout<<"Account Number: "<<accountNumber<<endl;
							cout<<"Account Type: "<<accountType<<endl;
							cout<<"Balance Amount: "<<balance<<endl;
						}			
					};
					
int main()
	{
		BankAccount myAccount;
		myAccount.assignValues("Lad Akash", 34162030, 'S', 50000.00);
		myAccount.displayInfo();
		myAccount.deposit(10000.00);
		myAccount.withdraw(500.00);
		
		return 0; 
	}

