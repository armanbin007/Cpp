#include <iostream>
using namespace std;
class Simple{
    int data1, data2;
    public:
        Simple(int x, int y = 10){  // Here the constructor has default argument y = 10;
        data1 = x;
        data2 = y;
     } void print(){
        cout << "The value of data1: "<<data1<<endl<<"The value of data2: "<<data2 <<endl;
     }
};
int main(){
    Simple o1(2);
    o1.print();
    return 0;
}