#include <iostream>
using namespace std;
class Employee{  // Base class
    public:
    int id;
    float salary;
    Employee(int x){
        id = x;
        salary = 13000;
    } Employee(){}
}; class Programmer : public Employee{  // Inherited Class // visibility_type Class_name  <--- syntax
    public:
    int lang;
    Programmer(int x){
        id = x;
        lang = 9;
        salary = 20000;
    } void print(){
        cout <<"ID: " << id <<endl << "Salary: " <<salary <<endl;
    }
};
int main(){
    Employee harry(1001), arman(1002);
    cout << "Salary of Harry: " << harry.salary <<endl;
    cout << "Salary of Arman: " << arman.salary <<endl;
    Programmer Ahmed(1003);
    cout << "Ahmed data\nLanguage code: " <<Ahmed.lang <<endl;
    // cout << skill.id <<endl; // I can directly print this because the visibility is set to public;
    Ahmed.print(); // If there is no visilibility then it is set to private by default
    return 0;
}