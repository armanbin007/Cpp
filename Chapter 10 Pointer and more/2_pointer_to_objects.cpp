#include <iostream>
using namespace std;
class Complex{
    int real, imaginary;
    public:
        void setData(int a, int b){
            real = a; imaginary = b;
        } void getData(){
            cout << "The real part is: " <<real <<endl;
            cout << "The imaginary part is: " <<imaginary <<endl;
        }
};
int main(){
    Complex a;
    a.setData(2, 4);
    Complex *ptr = &a;
    (*ptr).getData();
    cout <<endl;

    Complex *ptr2 = new Complex;
    // Usage of arrow operator ( -> )
    ptr2->setData(5, 10);
    ptr2->getData();
    cout <<endl;
    // Array of Objects
    Complex *ptr3 = new Complex[3];
    // Usage of arrow operator ( -> )
    ptr3->setData(1, 6);
    (ptr3+1)->setData(2, 3);
    (ptr3+2)->setData(8, 5);
    (ptr3)->getData();
    (ptr3+1)->getData();
    (ptr3+2)->getData();
    return 0;
}