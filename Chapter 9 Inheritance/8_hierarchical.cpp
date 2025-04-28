#include <iostream>
using namespace std;
class Base{
    public:
        int data1, data2;
        void setData(int x, int y){
            data1 = x;
            data2 = y;
        } void getData(){
            cout << "Data1: " <<data1 <<endl;
            cout << "Data2: " <<data2 <<endl;
        }
}; class Derived1 : public Base{};
    class Derived2 : public Base{};
int main(){
    Derived1 o1;
    o1.setData(10, 20);
    o1.getData();
    Derived2 o2;
    o2.setData(55, 66);
    o2.getData();
    return 0;
}