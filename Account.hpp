/*
Author: Syfur Rahman
Course: CSCI-135
Professor: Genady Maryash
Assignment: Project 1 Part 1
Define and implement the Account 
class with a header and a source file (this will be the
 assumption from now on: when you implement a class, you 
 will have two files .hpp and .cpp).
The Account class must have the following information 
stored in their own private member variables:
*/

#ifndef ACCOUNT_HPP
#define ACCOUNT_HPP

#include <iostream>
#include <string>

class Account {
private:
    // Variables 
    std::string firstName;
    std::string lastName;
    std::string accountNumber;
    std::string pin;
    int accountBalance;

    // private member function
    std::string generateAccountNumber();
public:
    // Constructors
    Account();
    Account(std::string userFirstName, std::string userLastName, std::string pinConfirm);

    // Mutators
    void setFirstName(std::string set);
    void setLastName(std::string set);
    bool setPin(std::string set);

    // Accessors
    std::string getFirstName();
    std::string getLastName();
    std::string getAccountNumber();
    std::string getPin();
    int getBalance();

    // Transactions
    bool transaction(int amount);
};

#endif