#include <iostream>
using namespace std;
int main(){
    float a = 34.4f;
    long double b = 40.45L;
    cout << "The size of 34 = "<<sizeof(34.4) <<endl;
    cout << "The size of 34f = "<<sizeof(34.4f) <<endl;
    cout << "The size of 34F = "<<sizeof(34.4F) <<endl;
    cout << "The size of 34l = "<<sizeof(34.l) <<endl;
    cout << "The size of 34L = "<<sizeof(34.L) <<endl;
    cout << "The value of a: "<<a<<endl<<"The value of b: "<<b<<endl;
    return 0;
}