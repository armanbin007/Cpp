#include <iostream>
#include <fstream>
using namespace std;

int main(){
    // connecting our file with hout stream
    ofstream hout("sample3.txt"); // Openning file using constructor
    // creating a name string variable and filling it with string entered by the user
    string name;
    cout << "Enter name: ";
    cin >> name;

    // writing a string to the file
    hout << "Name: " + name;
    hout.close();

    ifstream hin("sample4.txt");
    string content;
    // hin >> content; // Works like cin
    getline(hin, content); // Gets the whole string
    cout << content <<endl;

    hin.close();
    return 0;
}