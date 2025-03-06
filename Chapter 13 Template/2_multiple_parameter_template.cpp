#include <iostream>
using namespace std;
template <class T1, class T2> // multiple parameter template
class Base{
    public:
        T1 data1; // T1, T2 will be replace with the given data type
        T2 data2;
        Base(T1 x, T2 y){
            data1 = x;
            data2 = y;
        } void getData(){
            cout << "Data 1 is: " <<data1 <<endl;
            cout << "Data 2 is: " <<data2 <<endl;
        }
};
int main(){
    Base <int, string> o1(10, "Arman");
    o1.getData();
    return 0;
}