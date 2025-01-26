#include <iostream>
using namespace std;
class Employee{
    int id;
    static int count;
    public:
        void setData(){
            cout << "Enter the id: ";
            cin >> id;
            count++;
        } void getData(){
            cout <<count <<". the id of this employee is: " <<id <<endl;
        }
}; 
    int Employee :: count; // Default value is 0;
int main(){
    Employee Harry, Arman;
    Arman.setData();
    Arman.getData();
    Harry.setData();
    Harry.getData();
    return 0;
}