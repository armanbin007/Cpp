#include <iostream>
using namespace std;

void swap(int x, int y){      // This is call by value so it won't swap the values actually
    int temp = x;
    x = y;
    y = temp;
}
void swapr(int *x, int *y){   // This is call by reference so it willt swap the values because it has the address
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main(){
    int a,b;
    cin >> a >> b;
    swapr(&a, &b);
    cout << "The value of a: "<<a<<endl<<"The value of b: "<<b<<endl;
    return 0;
}