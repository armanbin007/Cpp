#include <iostream>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    char x;
    cin >> x;
    if(x == '+'){
        cout << a + b <<endl;
    } else if(x == '-'){
        cout << a - b <<endl;
    } else if(x == '*'){
        cout << a * b <<endl;
    } else if(x == '/'){
        cout << a / b <<endl;
    }
    return 0;
}