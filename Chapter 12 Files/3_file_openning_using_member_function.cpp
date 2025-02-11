#include <iostream>
#include <fstream>
using namespace std;

int main(){
    string name;
    name = "Adrita";
    ofstream out;
    out.open("sample2.txt");
    out << name;
    out << "\nHi, this is Arman";
    out << "\nHi, this is Arman";
    out << "\nHi, this is Arman";
    out.close();
    
    string content;
    ifstream in;
    in.open("sample2.txt");
    while(in.eof() == 0){
        getline(in, content);
        cout << content <<endl;
    }
    out.close();
    return 0;
}