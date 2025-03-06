#include <iostream>
using namespace std;
class BankDeposit{
    int principal, years, returnValue;
    float  interestRate;
    public:
    BankDeposit(){}
    BankDeposit(int p, int y, int r){
    principal = p; 
    years = y; 
    interestRate = r / 100.0; // r = 5%
    returnValue = principal;
    for (int i = 0; i < y; i++){
        returnValue = returnValue * (1+ interestRate);
    }
}
    BankDeposit(int p, int y, float r){
    principal = p; 
    years = y; 
    interestRate = r; // r = 0.05 (5%)
    returnValue = principal;
    for (int i = 0; i < y; i++){
        returnValue = returnValue * (1+ interestRate);
  }
}   void show(){
    cout << "Pricipal amount was: "<<principal<<endl
    <<"Return value after "<<years<<" years is: "<<returnValue<<endl<<endl;
  }
};
int main(){
    BankDeposit u1, u2, u3;
    int p, y ,R;
    float r;
    cout << "Enter the value of p y and r ";
    cin >> p >> y >> r;
    u1 = BankDeposit(p, y, r);
    u1.show();

    cout << "Enter the value of p y and R ";
    cin >> p >> y >> R;
    u2 = BankDeposit(p, y, R);
    u2.show();

    // u3.show();

    return 0;
}