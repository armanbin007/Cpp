#include <iostream>
using namespace std;
    int sum(int x, int y){
        // cout << "Using sum 1" <<endl;
        return x+y;
    } int sum(int x, int y, int z){
        // cout << "Using sum 2" <<endl;
        return x+y+z;
    }
int main(){
    int a = 10, b = 5, c = 30;
    cout << "Sum of a and b = "<<sum(a,b) <<endl;
    cout << "Sum of a, b and c = "<<sum(a,b,c) <<endl;
    return 0;
}