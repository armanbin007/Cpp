#include <iostream>
using namespace std;
class employee{
    char name[50];
    int id;
    public:
        void setName(){
            cout << "Enter the name: ";
            gets(name);
        } void setID(){
            cout <<"Enter the ID: ";
            cin >> id;
            getchar();
        } void getID(){
            cout <<"ID: "<<id<<endl;
        } void getName(){
            cout <<"Name: "<<name<<endl;
        }
};
int main(){
    employee AT[3];
    for (int i = 0; i < 3; i++){
        AT[i].setName();
        AT[i].setID();
    } for (int i = 0; i < 3; i++){
        AT[i].getID();
        AT[i].getName();
    }
        
    return 0;
}