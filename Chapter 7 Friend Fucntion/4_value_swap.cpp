#include <iostream>
using namespace std;
class c2;
class c1{
    int val;
    friend void exchange(c1 &, c2 &);
    public:
        void indata(int a){
            val = a;
        } void display(){
            cout << val <<endl;
        }
}; class c2{
    int val2;
    friend void exchange(c1 &, c2 &);
    public:
        void indata(int a){
            val2 = a;
        } void display(){
            cout << val2 <<endl;
        }
}; void exchange(c1 &x, c2 &y){
    int temp = x.val;
    x.val = y.val2;
    y.val2 = temp;
}
int main(){
    c1 x; c2 y;
    x.indata(10);
    y.indata(5);
    x.display();
    y.display();
    exchange(x , y);
    x.display();
    y.display();
    return 0;
}