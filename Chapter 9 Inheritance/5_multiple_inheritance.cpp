#include <iostream>
using namespace std;
class Base1{
    protected:
        int data1;
    public:
        void set_data1(int x){
            data1 = x;
        }
}; class Base2{
    protected:
        int data2;
    public:
        void set_data2(int y){
            data2 = y;
        }
};

class Derived : public Base1, public Base2{
    public:
        void show(){
            cout << "The value of Base1 = "<<data1 <<endl;
            cout << "The value of Base2 = "<<data2 <<endl;
            cout << "The sum of these values are = "<<data1 + data2 <<endl;
        }
};
int main(){
    Derived value;
    value.set_data1(10);
    value.set_data2(15);
    value.show();
    return 0;
}