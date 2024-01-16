//MODULE: 4_OOPS Concept_Constructor Destructor Encapsulation Abstraction
/*Question:4_Write a C++ program to implement a class called Bank Account that has private member variables for account number and balance.
			Include member functions to deposit and withdraw money from the account.*/

#include<iostream>
using namespace std;

class BankAccount{
	private:
		int accountNumber;
		double balance;
	
	public:
		BankAccount(int accNum, double iniBala)
		{
		 accountNumber=accNum;
		 balance=iniBala;	
		}
		
	void deposite(double amount)
		{
			if(amount>0)
				{	
					balance+=amount;
					cout<<"Deposite successful. New Balance: "<<balance<<endl;
			
				}
			else
				{
					cout<<"Unsuccessul Deposite."<<endl;
				}
		}
	void withdraw(double amount)
		{
			if(amount>0 && amount<=balance)
			{
				balance-=amount;
				cout<<"Withdrawal successful. New Balance: "<<balance<<endl;
			}
			else
			{
				cout<<"Invalid withdrawal amount or Insufficient Balance."<<endl;
			}
		}
	int getAccountNumber()
		{
			return accountNumber;
		}
	double getBalance()
		{
			return balance;
		}		
};
int main()
{
	BankAccount account1(54321, 5000);
	cout<<"Account Number: "<<account1.getAccountNumber()<<endl;
	cout<<"Initial Balance: "<<account1.getBalance()<<endl;
	
	account1.deposite(1000);
	account1.withdraw(500.5);
	cout<<"Final balance: "<<account1.getBalance()<<endl;
	
	return 0;
}

