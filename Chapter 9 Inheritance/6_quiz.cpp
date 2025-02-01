#include <iostream>
#include <cmath>
using namespace std;
class Calculator{
    protected:
        float x,y;
    public:
        void set_Data1(float a, float b){
            x = a; y = b;
        } float addition(){
            return (x + y);
        } float subtraction(){
            return (x - y);
        } float multiplication(){
            return (x * y);
        } float division(){
            return (x / y);
        }
}; class ScientificCalc{
    protected:
        float m,n;
    public:
        void set_Data2(float a, float b){
            m = a; n = b;
        } int power(int x, int y){
            return pow(x, y);
        } float sinCal(){
            return sin((m+n) * (3.1416/180)); 
        } float cosCal(){
            return cos((m+n) * (3.1416/180));
        } float tanCal(){
            return tan((m+n) * (3.1416/180));
        }
}; class Hybrid_Cal : public Calculator, public ScientificCalc{};

int main(){
    Hybrid_Cal o1;
    o1.set_Data1(10, 5);
    o1.set_Data2(90, 30);
    cout << "Addition : " << o1.addition() <<endl 
    << "Multiplication :"<< o1.multiplication()<<endl;
    
    cout << "sin of a + b : "<<o1.sinCal() <<endl;
    cout << "tan of a + b : "<<o1.tanCal() <<endl;
    cout << "Power is : "<< o1.power(2, 3) <<endl;
    return 0;
}