#include <iostream>
using namespace std;
class Employee{
    private:
        int salary, increment;
        string secret_key;
    public:
        int id, desk_no;
    void setData(int a1, int b1, string c1); // Prototype (kind of)
    void getData(){
        cout << "The ID is: "<<id <<endl;
        cout << "The Desk no. is: "<<desk_no <<endl;
        cout << "The salary is : "<<salary <<endl;
        cout << "The increment (in percentage) is: "<<increment <<endl;
        cout << "The secret key is: "<<secret_key <<endl<<endl;
    }
}; void Employee :: setData(int a1, int b1, string c1){  // Declaration
    salary = a1; increment = b1; secret_key = c1;
}
int main(){
    Employee Arman;
    Arman.id = 2189;
    Arman.desk_no = 17;
    Arman.setData(3800, 10, "2F&*82uPx#2");
    Arman.getData();
    return 0;
}