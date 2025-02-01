#include <iostream>
using namespace std;
class Point{
    int x, y;
    public:
        Point(int a, int b){  // Parameterized constructor
            x = a;
            y = b;
        } void displayPoint(){
            cout << "The point is ("<<x<<", "<<y<<")" <<endl;
        }
};
int main(){
    Point a(5, 10);
    Point b(3, -3);
    a.displayPoint();
    b.displayPoint();
    return 0;
}