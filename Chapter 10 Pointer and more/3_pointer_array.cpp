#include <iostream>
using namespace std;
class ShopItem{
    int id; float price;
    public:
        void setData(int a, float b){
            id = a; price = b;
        } void getData(){
            cout << "Item ID: "<<id <<endl;
            cout << "Item Price: "<<price <<endl;
        }
};
int main(){
    int id; float price;
    ShopItem *ptr = new ShopItem[3];
    for (int i = 0; i < 3; i++){
        cout << "Enter the ID and Price of item no: "<<i+1 <<" = ";
        cin >> id >> price;
        (ptr+i) -> setData(id, price);
    } for (int i = 0; i < 3; i++){
        cout << "Item number: " <<i+1 <<endl;
        (ptr+i) -> getData();
    }
    return 0;
}