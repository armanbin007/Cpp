#include <iostream>
using namespace std;
int fact(int x){
    int factorial = 1;
    for(int i = 1; i <= x; i++){
        factorial *= i;
    } return factorial;
}
int main(){
    int a;
    cin >>a;
    cout <<"Factorial of "<<a << " is : "<< fact(a) <<endl;
    return 0;
}