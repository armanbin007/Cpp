#include <iostream>
using namespace std;

int main(){
    int a;
    cout << "Enter value: ";
    cin >> a;
    if(a % 2 == 0){
        cout << "Even" <<endl;
    } else{
        cout << "Odd" <<endl;
    }
    return 0;
}