#include <iostream>
using namespace std;

int main(){
    int marks[4];
    for (int i = 0; i < 4; i++){
        cin >> marks[i];
    } 
    int *p = marks;
    cout <<"The value of marks[0] "<< *p <<endl;
    cout <<"The value of marks[1] "<< *(p+1) <<endl;
    cout <<"The value of marks[2] "<< *(p+2) <<endl;
    cout <<"The value of marks[3] "<< *(p+3) <<endl;
    
    return 0;
}