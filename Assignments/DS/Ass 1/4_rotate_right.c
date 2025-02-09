#include <stdio.h>
int rotateRight(int a[], int size, int x){
    int temp[x];
    for (int j = 0, i = size-x; i < size; i++, j++){
        temp[j] = a[i];
    } for (int i = 0; i < x; i++){
        for (int j = size-1; j > 0; j--){
            a[j] = a[j-1];
        }
    } for (int i = 0; i < x; i++){
        a[i] = temp[i];
    }
}
int main(){
    int source[] = {10, 20, 30, 40, 50, 60};
    int size = sizeof(source)/sizeof(source[0]);
    rotateRight(source, size, 3);
    for (int i = 0; i < 6; i++){
        printf("%d ", source[i]);
    }
    return 0;
}