#include <iostream>
using namespace std;

int main(){
    int a = 2004;
    int *ptr = &a;
    cout << "The value stored at address ptr: " <<*ptr <<endl;
    float *p = new float(97.99); // Allocated memory for a float value and
                                 // initialized it with 97.99
    // delete p;
    cout << "The value stored at address p " <<*p <<endl<<endl;

    int *arr = new int[3]; // Here I have allocated memory dynamically
    arr[0] = 10;
    *(arr+1) = 15;  /* You could also write like this, 
                       because array's index is in contiguous memory */
    arr[2] = 20;
    // delete []arr; // It deletes/clears the dynamically allocated memory
    for (int i = 0; i < 3; i++){
        cout << "The value of arr["<<i<<"] is : "<<arr[i] <<endl;
    }
    return 0;
}