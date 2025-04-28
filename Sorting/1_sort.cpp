#include <iostream>
#include <algorithm>
using namespace std;
void print(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main(){
    int arr[] = {5, 2, 9, 1, 5, 6};
    int size = sizeof(arr)/sizeof(arr[0]);
    sort(arr, arr + size);
    print(arr, size);
    return 0;
}