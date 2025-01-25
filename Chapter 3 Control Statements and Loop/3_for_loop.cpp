#include <iostream>
using namespace std;

int main(){
    int x;
    cout <<"Enter the value of x: ";
    cin >>x;
    for (int i = 1; i <= x; i++){
        if(i == 4){
            cout <<i<< ". Happy Birthday Arman" <<endl;
            break; // It exits the loop
        } else if(i == 3){
            cout <<i<< ". Happy Birthday Lamyea" <<endl;
            continue; // Skips the rest and moves to next iteration
            cout <<i<<". Helllloowwww" <<endl;
        }
        else{
        cout <<i <<". Hello"<<endl;
        }
    }
    
    return 0;
}