#include <iostream>
using namespace std;
void print(const string& msg){
    // msg = "Hi";   //It won't work because msg is now constant!
    cout << msg <<endl;
}
int main(){
    string c = "Hi I am Arman";
    // cout <<c<<endl;
    print(c);
    return 0;
}