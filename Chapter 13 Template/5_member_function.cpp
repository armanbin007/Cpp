#include <iostream>
using namespace std;
template <class T>
class Data{
    T data1;
    public:
        void setData(T x){
            data1 = x;
        } void display(int x){
            cout << "Data1: " << data1 <<endl;
        }
}; template <class T>
void getData(T x){
    cout << "Temp one" <<endl;
} void getData(int x){
    cout << "hiii" <<endl;
}
int main(){
    // Data <string> s1;
    // s1.setData("Hello there! I am Arman");
    getData(9); // It will print the exact matching one!
    getData(7.9);
    return 0;
}