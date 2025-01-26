#include <iostream>
using namespace std;
float profit(int money, float factor = 1.04){  // here factor 1.04 means 4% interest
    return money * factor;
}
int main(){
    int money = 100000;
    cout << "Total money after 1 year: "<< profit(money) <<endl;
    cout << "For VIP Total money after 1 year: "<< profit(money, 1.10) <<endl;
    return 0;
}