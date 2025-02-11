#include <stdio.h>
int repitition(int arr[], int n) {
    int freq[100] = {0}, countFreq[100] = {0};
    for (int i = 0; i < n; i++){ // Counts the occurences of the element
        freq[arr[i]]++;
        }
        for (int i = 0; i < 100; i++){
        //     if(freq[i] > 0){
        //     printf("Number: %d times: %d\n", i, freq[i]);
        // }
    }    
    for (int i = 0; i < 100; i++){ // Counts if the element has repeated more than once
        if(freq[i]>1) {
            countFreq[freq[i]]++;
            if(countFreq[freq[i]]>1){
                return 1;
            }
        }
    }
    return 0;
}

int main() {
    int arr[] = {4, 5, 6, 6, 4, 3, 6, 4}, size = sizeof(arr) / sizeof(arr[0]);
    int result = repitition(arr, size);
    if(result){
        printf("True\n");
    } else{
        printf("False\n");
    }
    return 0;
}
