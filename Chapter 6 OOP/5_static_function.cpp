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
            cout <<"The ID of this employee is: " <<id <<endl;
        } static void getCount(){  // Static function
            cout << "The value of count is: " <<count<<endl<<endl;
        }
}; 
    int Employee :: count; // Default value is 0;
int main(){
    Employee Harry, Arman;
    Arman.setData();
    Arman.getData();
    Employee :: getCount();  // Static function that prints the count value;
    Harry.setData();
    Harry.getData();
    Employee :: getCount();
    return 0;
}