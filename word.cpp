/*
Author: Syfur Rahman
Course: CSCI-135
Professor: Genady Maryash
Assignment: Project Task A
The number 60 on this case will indicate the max width of characters your 
output document will hold on every line. The second parameter should be the name of 
the output text file where your formatted document will be stored, which in this case it’s output.txt. 
Please keep in mind that each of the settings on the first line are seperated by a ; with no space in between.
Based on the example input file shown above, our output.txt should look something like this after running it 
through our amazing Word formatter:
*/
#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

string lineSplit(string line, int width) {
    string result = "";
    int count = 0;
    istringstream iss(line);
    string word;
    bool first = true;

    while(iss >> word) {
        int size = word.length() + 1;

        if(first == 1) {
            result += word;
            count += word.size();
            first = false;
        } else if(size + count < width) {
            result += " " + word;
            count += size;
        } else {
            result += "\n" + word;
            count = word.size();
        }
    }

    return result;
}

string resultOutput(ifstream &readFile, int count) {
    string result = "";
    string line;
    bool first = true;
    bool print = false;
    bool lineBreak = false;
    string paragraph = "";

    while(getline(readFile, line)) {
        paragraph += " " + line;

        if(line.size() <= count) {
            print = true;
            result += lineSplit(paragraph, count);

            if(line == "" && result[result.size() - 1] != '\n') {
                result += "\n";
            }

            result += "\n";
            paragraph = "";
        } else {
            print = false;
        }
    }

    if(print == 0) {
        result += lineSplit(paragraph, count);
    }

    if(result[result.size() - 1] == '\n'){
        return result.substr(0, result.size() - 1);
    }

    return result;
}

int main() {
    string fileName;
    cout << "Enter the input filename: ";
    cin >> fileName;

    ifstream readFile;
    readFile.open(fileName);

    string firstLine;
    getline(readFile, firstLine);
    int index = firstLine.find(';');
    int count = stoi(firstLine.substr(0, index));
    string outputFile = firstLine.substr(index + 1, firstLine.size() - index - 2);

    string output = resultOutput(readFile, count);
    readFile.close();

    ofstream fileOut;
    fileOut.open(outputFile);
    fileOut << output;
    fileOut.close();

    return 0;
}