#include <stdio.h>
void rotateLeft(int a[], int size, int x){
    int temp[x];
    for (int i = 0; i < x; i++){
        temp[i] = a[i];
    } for (int i = 0; i < size - x; i++){
        a[i] = a[i + x];
    } for (int i = 0; i < x; i++){
        a[size - x + i] = temp[i];
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