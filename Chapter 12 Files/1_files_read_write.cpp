#include <iostream>
#include <fstream>
using namespace std;

int main(){
    string st = "Hi, Arman don't give up! You're almost there", st2;
    // Opening file using constructor and writing
    ofstream out("sample1.txt"); // Write operation //ofstream writes the whole string
    out << st; // Works like cout
    // Opening file using constructor and reading
    ifstream in("sample2.txt"); // read operation //ifstream doesn't print after spaces or newline
    // in >> st2; // Works like cin
    getline(in, st2); //getline(object, string_variable);
    cout <<st2;
    return 0;
}