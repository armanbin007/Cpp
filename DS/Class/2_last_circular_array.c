#include <stdio.h>
int main(){
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    int end = 1;
    for (int i = 0; i < size; i++){
        printf("%d ", arr[end]);
        end--;
        if(end == -1){
            end = size - 1;
        }
    }
    return 0;
}