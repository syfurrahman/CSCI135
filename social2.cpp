/*
Author: Syfur Rahman
Course: CSCI-135
Professor: Genady Maryash
Assignment: Lab 11 TASK B
MON DEC 5 DUE DATE
Assignment: Lab 11B - Creating a Network profile.
In this task, write a program social2.cpp, 
The three main functionalities of the class Network are: 
1) adding new users to the network, 
2) following, and 
3) posting messages. We are going to develop them in these three tasks.
*/

#include <iostream>

using namespace std;

class Profile {
private:
    string username;
    string displayname;
public:

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


class Network {
private:

  static const int MAX_USERS = 20; // max number of user profiles

  int numUsers;                    // number of registered users

  Profile profiles[MAX_USERS];     // user profiles array:

  int findID (string usrn){
      for (int i = 0; i < numUsers; i++) {
          if (profiles[i].getUsername()==usrn) {
              return i;
          }
      }
      return 1;
  }

public:
  Network() {
      numUsers = 0;
  };

  bool addUser(string usrn, string dspn) {
    if (numUsers == MAX_USERS) {
        return false;
    }
    for (int i = 0; i < numUsers; i++) {
        if (profiles[i].getUsername()==usrn) {
            return false;
        }
    }
    for(int i = 0; i < usrn.length(); i++) {
        if((!isalpha(usrn[i]))&&(!isdigit(usrn[i]))) {
            return false;
        }
    }
    profiles[numUsers] = Profile(usrn,dspn);
    numUsers++;
    return true;
}

};

int main() {
  Network nw;
  cout << nw.addUser("mario", "Mario") << endl;     // true (1)
  cout << nw.addUser("luigi", "Luigi") << endl;     // true (1)

  cout << nw.addUser("mario", "Mario2") << endl;    // false (0)
  cout << nw.addUser("mario 2", "Mario2") << endl;  // false (0)
  cout << nw.addUser("mario-2", "Mario2") << endl;  // false (0)

  for(int i = 2; i < 20; i++)
      cout << nw.addUser("mario" + to_string(i), 
                 "Mario" + to_string(i)) << endl;   // true (1)

  cout << nw.addUser("yoshi", "Yoshi") << endl;     // false (0)
}