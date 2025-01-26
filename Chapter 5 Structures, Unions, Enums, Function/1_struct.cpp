#include <iostream>
using namespace std;

struct employee{
    int id;
    char name[50];
    float salary;
};

int main(){
    employee e[3];
    for (int i = 0; i < 3; i++){
        cin >>e[i].id;
        getchar();
        gets(e[i].name);
        cin >>e[i].salary;
    } for (int i = 0; i < 3; i++){
        cout << "ID: "<<e[i].id <<endl;
        cout << "Name: "<<e[i].name <<endl;
        cout << "Salary: "<<e[i].salary <<endl<<endl;
    }
    
    return 0;
}