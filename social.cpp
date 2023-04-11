/*
Author: Syfur Rahman
Course: CSCI-135
Professor: Genady Maryash
Assignment: Lab 11 Task A

Assignment: Lab 11A - Creating a social profile.
In this task, write a program social.cpp, 
in which you have to implement the class Profile that can store the info about a user of the network.
*/
#include <iostream>

using namespace std;

class Profile {
private:
    string username;
    string displayname;
public:
    // Profile constructor for a user (initializing 
    // private variables username=usrn, displayname=dspn)
    Profile(string usrn, string dspn) {
        username = usrn;
        displayname = dspn;
    }

    Profile() {
        username = " ";
        displayname = " ";
    }

    string getUsername() {
        return username;
    }
    string getFullName() {
        return displayname + " (@" + username + ")";
    }
 
    void setDisplayName(string dspn) {
        displayname = dspn;
    }
};

int main() {
    Profile p1("marco", "Marco");    
    cout << p1.getUsername() << endl; // marco
    cout << p1.getFullName() << endl; // Marco (@marco)

    p1.setDisplayName("Marco Rossi"); 
    cout << p1.getUsername() << endl; // marco
    cout << p1.getFullName() << endl; // Marco Rossi (@marco)
    
    Profile p2("tarma1", "Tarma Roving");    
    cout << p2.getUsername() << endl; // tarma1
    cout << p2.getFullName() << endl; // Tarma Roving (@tarma1)
}