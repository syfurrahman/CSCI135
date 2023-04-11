/*
Author: Syfur Rahman
Course: CSCI-135
Professor: Genady Maryash
Assignment: Lab 11 TASK C
MON DEC 5 DUE DATE
Write a new program social3.cpp,
 which is an improved version of the previous program.
The class Network should be changed
 to keep the friendship (following) 
relation between the users. 
You should:
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

 bool following[MAX_USERS][MAX_USERS];

public:
  Network() {
      numUsers = 0;
      for(int i = 0; i < MAX_USERS; i++) {
          for(int j = 0; j < MAX_USERS; j++) {
              following[i][j] = false;
          }
      }
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

 bool follow(string usrn1, string usrn2) {
     int i = findID(usrn1);
     if(i == -1) {
         return false;
     } else {
     for (int j = 0; j < numUsers; j++ ) {
         if(profiles[j].getUsername()==usrn2) {
             following [i][j] = true;
             return true;
         }
     }
 }
 return false;
 }


 void printDot() {
     cout << "digraph{\n";
     for (int i = 0; i < numUsers; i++) {
         cout << "\t\"@" << profiles[i].getUsername()<<"\"\n";
     } 
     for (int i = 0; i < numUsers; i++) {
       for(int j = 0; j < numUsers; j++) {
           if (following[i][j]) {
               cout << "\t\"@" << profiles[i].getUsername() <<'"'<< "->" << "\t\"@" << profiles[j].getUsername()  << '"'<< endl;
           }
       }
     }
     cout << "}" << endl;
  }

};

int main() {
    Network nw;
    // add three users
    nw.addUser("mario", "Mario");
    nw.addUser("luigi", "Luigi");
    nw.addUser("yoshi", "Yoshi");

    // make them follow each other
    nw.follow("mario", "luigi");
    nw.follow("mario", "yoshi");
    nw.follow("luigi", "mario");
    nw.follow("luigi", "yoshi");
    nw.follow("yoshi", "mario");
    nw.follow("yoshi", "luigi");

    // add a user who does not follow others
    nw.addUser("wario", "Wario");
    
    // add clone users who follow @mario
    for(int i = 2; i < 6; i++) {
        string usrn = "mario" + to_string(i);
        string dspn = "Mario " + to_string(i);
        nw.addUser(usrn, dspn);
        nw.follow(usrn, "mario");
    }
    // additionally, make @mario2 follow @luigi
    nw.follow("mario2", "luigi");

    nw.printDot();
}