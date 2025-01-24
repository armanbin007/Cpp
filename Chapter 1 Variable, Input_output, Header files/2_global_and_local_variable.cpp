#include <iostream>
using namespace std;

    int a = 25; // Global Variable
void sum(){
    cout <<a;
}
int main(){
    int a = 13; // Local Variable
    cout <<a<<"\n";
    sum();
    return 0;
}