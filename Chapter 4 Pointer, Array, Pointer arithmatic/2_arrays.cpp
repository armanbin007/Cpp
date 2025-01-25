#include <iostream>
using namespace std;

int main(){
    int arr[5];
    for (int i = 0; i < 5; i++){
        cin >>arr[i];
        // cout <<"Marks of "<<i<<" "<<arr[i]<<endl;
    }
    int arr2[] = {1,5,9,59,97};
    // for (int i = 0; i < 5; i++){
    //     cout <<arr2[i] <<" ";
    // }
    int i = 0;
    while(i < 5){
        cout <<"Marks of "<<i<<" "<<arr[i]<<endl;
        i++;
    }
    
    return 0;
}