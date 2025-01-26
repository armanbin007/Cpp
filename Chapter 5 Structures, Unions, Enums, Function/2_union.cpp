#include <iostream>
#include <string.h>
using namespace std;

    union money{
        int rice;
        char car[10];
        float pounds;
    };

int main(){
    union money m1;
    m1.rice = 10;
    strcpy(m1.car,"Toyota");
    m1.pounds = 96.8;
    // cout <<m1.rice <<endl;
    // cout <<m1.car <<endl;
    cout <<m1.pounds <<endl; /*this one output is correct because at the end pounds was declared
    so it is using only a variable only because of shared memory*/
    return 0;
}