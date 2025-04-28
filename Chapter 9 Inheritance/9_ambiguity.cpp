#include <iostream>
using namespace std;
class A{
    public:
        void show(){
            cout << "Class A" << endl;
        }
}; class B{
    public:
        void show(){
            cout << "Class B" << endl;
        }
}; class C: public A, public B{
    public:
        void show(){
            A :: show();
        }
};
int main(){
    C obj;
    obj.show(); // Error: Ambiguous call to show()
    return 0;
}