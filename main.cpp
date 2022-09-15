#include <iostream>
#include <iomanip>
#include "account.h"
using std::cin;
using std::cout;
using std::endl;
/*
* main.cpp
* Hameeda Jaghori
* CIS 554-M401 Object Oriented Programming in C++
* HW#2 - Exercise 4.14 pg150
* 2/20/2022
* This program will determine whether a department-store customer has exceeded the credit limit on a charge account. 
*/


int main() {
	Bank bnk; //creating an object of bank
	int account = 0;// sets the account variable in to 0
	double charges = 0; // declears the charges variable
	double credits = 0;// declears total credits
	double creditLimit = 0;// declears credit limit
	double balance = 0; // declears the balance
	
	// prints out the welcom banner
	cout<<"|************************************|" << endl;
	cout<<"|Welcome to account tracker Program! | " << endl;
	cout<<"|this Program helps you keep track of|" << endl;
	cout<<"|your account!-----------------------|" << endl;
	cout << endl;
	
	//sets the while loop until the account is not -1

	while (account != -1) {
		cout << "Enter account number (or -1 to quit): "; // prompts the user to enter the aacount number.
		cin >> account;
		if (account == -1) { // if the aacount nubmer is -1 the while loop exits
			break;
		}
		cout << "Enter beginning balance: $";// geting the balance
		cin >> charges;
		cout << "Enter total charges: $"; // getting the total charges
		cin >> credits;
		cout << "Enter total credits: $";// getting the total credits
		cin >> balance;
		cout << "Enter Credit Limit: $";// getting the credit limits
		cin >> creditLimit;
		 // set each fanction in to its decleard variable
		bnk.setBalance(charges); // sets the balace to charges
		bnk.setCredits(balance); 
		bnk.setCharges(credits);
		bnk.setCreditLimit(creditLimit);
		// gets each fanctions value;
		bnk.getBalance();
		bnk.getCharges();
		bnk.getCredits();
		bnk.getCreditLimit();

		//sets the newbalance to the Calculate new balance function
		double newBalance = bnk.getCalculateNewBlance();
		if(newBalance > creditLimit){// if the new balnce is greater than the credtit limit 
			cout << "new Balance is $" << newBalance << endl;
			cout << "Account " << account<<endl;
			cout << "Credit limit:  $" << creditLimit << endl;
			cout << "Credit limit Exceeded.";// prints a message for the user that the credit limit axceeded
		

		}
		else {// if new balance is not greater than credit limit  
			cout << "New Balance is  $" << newBalance<<endl;// prints the new balance for the user.

		}
		cout << endl;
		cout << endl;


		




		
	}

}