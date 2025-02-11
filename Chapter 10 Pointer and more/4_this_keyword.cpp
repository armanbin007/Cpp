#include <iostream>
using namespace std;
class A{
    int a;
    public:
        // A setData(int a){
        void setData(int a){
            this -> a = a;
            // return *this;  // This allows method chaining. Look below
        } void getData(){
            cout << "The value of a is: " <<a <<endl;
        }
};
int main(){
    A a;
    // a.setData(5).getData(); // Can use if we use return *this;
    a.setData(10);
    a.getData();
    return 0;
}