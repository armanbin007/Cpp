#include <stdio.h>
int rotateLeft(int a[], int size, int x){
    int temp[x];
    for (int i = 0; i < x; i++){
        temp[i] = a[i];
    } for (int i = 0; i < x; i++){
        for (int j = 0; j < size; j++){
        a[j] = a[j+1];
     }
    } for (int i = x; i < size; i++){
        a[i] = temp[i-x];
    }
}
int main(){
    int source[] = {10, 20, 30, 40, 50, 60};
    int size = sizeof(source)/sizeof(source[0]);
    rotateLeft(source, size, 3);
    for (int i = 0; i < size; i++){
        printf("%d ", source[i]);
    }
    return 0;
}