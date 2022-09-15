#include <iostream>
#include"account.h"
using std::cin;
using std::cout;
using std::endl;

/*
* account.cpp
* Hameeda Jaghori
* CIS 554-M401 Object Oriented Programming in C++
* HW#2 - Exercise 4.14 pg150
* 2/20/2022
* This program will determine whether a department-store customer has exceeded the credit limit on a charge account.
*/
//account sets balance
void Bank::setAccount(int ac) {
	account = ac;
}
 //sets charges
void Bank::setCharges(double chrg) {
	charges = chrg;

}
//sets credits
void Bank::setCredits(double crd) {
	credits = crd;
}
//sets credit limit
void Bank::setCreditLimit(double crdLmt) {
	creditLimit = crdLmt;
}
//sets balance
void Bank::setBalance(double blnc) {
	balance = blnc;

}
// gets the account
int Bank::getAccount() {
	return account;
}
//gets the charges
double Bank::getCharges() {
	return charges;
}
//gets the credits
double Bank::getCredits() {
	return credits;
}
double Bank::getCreditLimit() {
	return creditLimit;
}
//gets the balance
double Bank::getBalance() {
	return balance;
}
// function that checks the new balance
double Bank::getCalculateNewBlance() {
	double newBalance =(charges +balance) - credits;
	return newBalance;
	

}
