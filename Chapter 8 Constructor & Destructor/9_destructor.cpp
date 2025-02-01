#include <iostream>
using namespace std;
int count = 0;
class num{
    public:
        num(){
            count++;
            cout << "Constructor is called for obj: "<<count <<endl;
        } ~num(){
            cout << "Destructor is called for obj: "<< count <<endl;
            count--;
        }
};
int main(){
    cout << "Creating 1st obj a" <<endl;
    num a;{
        cout << "Entering this block" <<endl<<endl;
        cout << "Creating 2 more objects" <<endl;
        num a2, a3;
        cout << "Exiting this block" <<endl;
    } cout <<endl << "Back to main function" <<endl;
    return 0;
}