#include <iostream>
using namespace std;

int main(){
    int age;
    cout << "Enter your age: ";
    cin >> age;
    switch(age){
        case 18:{
            cout << "You can drive" <<endl;
            break;
        } case 30:{
            cout << "You are an adult and can drive" <<endl;
            break;
        } default:{
            cout << "Invalid age" <<endl;
            break;
        }
    }
    return 0;
}