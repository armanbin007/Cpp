#include <iostream>
using namespace std;
template <class T1, class T2>
void funcAvg(T1 a, T2 b){
    float avg = (a+b)/2.0;
    cout << "Avg: " << avg <<endl;
}
// swap function
template <class T>
void Swap(T &x, T &y){
    T temp = x;
    x = y;
    y = temp;
}
int main(){
    int x = 10, y = 20;
    Swap(x, y);
    cout << x <<" " << y <<endl;
    funcAvg(10, 3.5);
    funcAvg(3, 10);
    return 0;
}