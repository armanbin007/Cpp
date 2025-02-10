#include <stdio.h>
int removeAll(int a[], int size, int element){
    int j = 0;
    for (int i = 0; i < size; i++){
        if(a[i] != element){
            a[j++] = a[i];
        }
    } for (int i = j; i < size; i++){
        a[i] = 0;
    }
}
int main(){
    int source[] = {10, 2, 30, 2, 50, 2, 2, 0, 0};
    int size = sizeof(source)/sizeof(source[0]);
    removeAll(source, size, 2);
    for (int i = 0; i < size; i++){
        printf("%d ", source[i]);
    }
    return 0;
}