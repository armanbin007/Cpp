#include <iostream>
using namespace std;
int c = 40;
int main(){
    int a,b,c;
    cout <<"Enter the value of a and b : ";
    cin >>a>>b;
    c = a+b;
    cout << "The sum is = "<<c <<endl;
    cout << "Global C = "<<::c <<endl;
    return 0;
}