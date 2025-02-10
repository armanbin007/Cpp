#include <stdio.h>
void rotateRight(int a[], int size, int x){
    int temp[x];
    for (int j = 0, i = size-x; i < size; i++, j++){
        temp[j] = a[i];
    } for (int i = size-1; i >= x; i--){
        a[i] = a[i-x];
    } for (int i = 0; i < x; i++){
        a[i] = temp[i];
    }
}
int main(){
    int source[] = {10, 20, 30, 40, 50, 60};
    int size = sizeof(source)/sizeof(source[0]);
    rotateRight(source, size, 3);
    for (int i = 0; i < size; i++){
        printf("%d ", source[i]);
    }
    return 0;
}