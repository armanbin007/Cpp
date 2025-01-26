#include <iostream>
using namespace std;
class complex{
    int a,b;
    public:
        void setData(int x, int y){
            a = x;
            b = y;
        } void setDataBySum(complex o1, complex o2){
            a = o1.a + o2.a;
            b = o1.b + o2.b;
        } void print(){
            cout << "Complex num is: "<<a<<" + "<<b<<"i"<<endl;
        }
};
int main(){
    complex n1, n2, n3;
    n1.setData(2, 4);
    n1.print();
    n2.setData(4, 8);
    n2.print();
    n3.setDataBySum(n1, n2);
    n3.print();
    return 0;
}