#include <iostream>
#include <cmath>
using namespace std;
class Point{
    int x, y;
    public:
        Point(int a, int b){  // Parameterized constructor
            x = a;
            y = b;
        } void displayPoint(){
            cout << "The point is ("<<x<<", "<<y<<")" <<endl;
        } friend float distancePointer(Point o1, Point o2){
            float m = o2.x - o1.x;
            float n = o2.y - o1.y;
            float result = sqrt((pow(m, 2) + pow(n, 2)));
            return result;
        }
};
int main(){
    Point a(2, -2);
    Point b(2, 6);
    a.displayPoint();
    b.displayPoint();
    cout << "The distance between the pointer is: "<< distancePointer(a, b)<<endl;
    return 0;
}