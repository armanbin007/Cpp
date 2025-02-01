#include <iostream>
using namespace std;
class Test{
    int a, b;
    public:
        // Test(int i, int j) : a(i), b(j){
        // Test(int i, int j) : b(j), a(i+b){  // This will run but a will have 
                                            // garbage value!! Because a will be initialized first
        Test(int i, int j) : a(i), b(a + j){
            cout << "Constructor called!!!" <<endl;
            cout << "The value of a = "<<a <<endl;
            cout << "The value of b = "<<b <<endl;
        }
};
int main(){
    Test a(5, 10);  
    return 0;
}