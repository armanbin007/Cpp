#include <iostream>
using namespace std;

int main(){
    int age;
    cout << "Enter your age: ";
    cin >> age;
    if(age >= 18 && age < 30){
        cout <<"You can drive"<<endl;
    } else if(age >= 30 && age <= 70){
        cout << "You are an adult, You can drive" <<endl;
    } else{
        cout << "You can't drive!" <<endl;
    }
    return 0;
}