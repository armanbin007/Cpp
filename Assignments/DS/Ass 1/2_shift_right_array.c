#include <stdio.h>
int shiftLeft(int a[], int size, int x){
    for (int i = 0; i < x; i++){
        for (int j = size-1; j > 0; j--){
            a[j] = a[j-1];
        }
    }
    for (int i = 0; i < x; i++){
            a[i] = 0;
        }
}
int main(){
    int source[] = {10, 20, 30, 40, 50, 60};
    int size = sizeof(source)/sizeof(source[0]);
    shiftLeft(source, size, 3);
    for (int i = 0; i < size; i++){
        printf("%d ", source[i]);
    }
    return 0;
}