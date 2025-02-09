#include <stdio.h>
int Remove(int a[], int size, int index){
    for (int i = index; i < size-1; i++){
        a[i] = a[i + 1];
    } a[size-1] = 0;
}
int main(){
    int source[] = {10, 20, 30, 40, 50, 0, 0};
    int size = sizeof(source)/sizeof(source[0]);
    Remove(source, size, 2);
    for (int i = 0; i < size; i++){
        printf("%d ", source[i]);
    }
    return 0;
}