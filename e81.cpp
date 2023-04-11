#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main () {
     // Open a file with the name hello.txt.
     ofstream out;
     out.open("hello.txt");
     // Store the message "Hello, World!" in the file.
     out << "Hello, World!";
     // Close the file.
     out.close();
     // Open the same file again.
     ifstream in;
     in.open("hello.txt");
     // Read the message into a string variable and print it.
     string message;
     getline(in, message);
     cout << message << endl;
     in.close();
     return 0;
}