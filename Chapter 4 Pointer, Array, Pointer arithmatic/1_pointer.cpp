#include <iostream>
using namespace std;

int main(){
    int a = 2004;
    int *b = &a;
    cout <<"The Address of a " <<b <<endl; // Prints the memory address (in hexadecimal) of a
    cout <<"The Value of a "<<*b <<endl<<endl; // Prints the value of a using the address of a

    int** x = &b;
    cout << "The address of b "<<&b <<endl;
    cout << "The Address of b "<<x <<endl;
    cout << "The Value of a "<<**x <<endl;
    return 0;
}