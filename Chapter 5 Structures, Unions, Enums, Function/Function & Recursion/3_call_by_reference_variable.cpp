#include <iostream>
using namespace std;

    void swap(int &x, int &y){  // Call by reference variable
        int temp = x;
        x = y;
        y = temp;
    }

    int & swap2(int &x, int &y){  // Fucn. returning reference of x
        int temp = x;
        x = y;
        y = temp;
        return x;
    }

int main(){
    int num1 = 43, num2 = 60;
    cout << "num1 = " <<num1 << " num2 = " <<num2 <<endl;
    swap(num1, num2);
    cout << "num1 = " <<num1 << " num2 = " <<num2 <<endl;
    swap2(num1, num2) = 12500; // changes the value of num1 to 12500 because we have returned x(num1) in function.
    cout << num1 <<endl;

    return 0;
}