#include <iostream>
using namespace std;

    int factorial(int n){
        if(n <= 1){   // Base condition without this the func. won't stop
            return 1;
        } 
        return n * factorial(n-1);
    } 
    int fib(int x){
        if(x < 2){
            return 1;
        } return fib(x-2) + fib(x-1);
    }
int main(){
    int num, n;
    cin >> num;
    cout <<"Factorial of "<<num<<" is: "<< factorial(num)<<endl;
    cin >> n;
    cout << "Fibonacci in "<<n<<" value: "<<fib(n) <<endl;
    return 0;
}

/*  Explanation
factorial(4) = 4 * factorial(3);
factorial(4) = 4 * 3 * factorial(2);
factorial(4) = 4 * 3 * 2 * factorial(1);
factorial(4) = 4 * 3 * 2 * 1 = 24;
*/