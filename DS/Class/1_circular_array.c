#include <stdio.h>
int main(){
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    int start = 2;
    // int last = (start + lenght - 1) % size; // lenght = valid numbers, This is the formula!
    for (int i = 0; i < size; i++){
        int k = (start + i) % size;
        printf("%d ", arr[k]);
    }
    
    return 0;
}