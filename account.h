#pragma once
#include <iostream>
#include <string>

/*
* account.h
* Hameeda Jaghori
* CIS 554-M401 Object Oriented Programming in C++
* HW#2 - Exercise 4.14 pg150
* 2/20/2022
* This program will determine whether a department-store customer has exceeded the credit limit on a charge account.
*/
//creates a class by the name of bank
class Bank {
public:
	// public functions setters
	void setAccount(int);// sets the account number as an integer
	void setCharges(double); // sets the charges type as a double 
	void setCredits(double); // sets total credit as dobule
	void setCreditLimit(double);// sets the credit limit as double
	void setBalance(double); // sets the total balance
	//public function getters
	int getAccount(); // gets the account number
	double getCharges();// gets th charges
	double getCredits();// gets the total credits
	double getCreditLimit();// gets the credit limit
	double getBalance(); // gets th total balance
	double getCalculateNewBlance();// a function the gets the new balnce spent by the customer 
	
private:
	// private variables 
	int account; // initializes account as integer
	double charges; //  initializes charges as double
	double credits; // initiales total credits
	double creditLimit; // initializes credit limits
	double balance; // initailizes balance
};