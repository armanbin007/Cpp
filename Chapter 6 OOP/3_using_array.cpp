#include <iostream>
using namespace std;
class shop{
    int itemId[100];
    int itemPrice[100];
    int counter;
    public:
        void initCounter(){
            counter = 0;
        }
        void setPrice();
        void displayPrice();
}; void shop :: setPrice(){
    cout <<"Enter the ID of "<<counter+1<<" no. product: ";
    cin >>itemId[counter];
    cout <<"Enter the price of "<<counter+1<<" no. item: ";
    cin >>itemPrice[counter];
    counter++;
 } void shop :: displayPrice(){
    for (int i = 0; i < counter; i++){
        cout <<"The price of item with ID "<<itemId[i]<<" is: "<<itemPrice[i]<<endl;
    }
    
 }
int main(){
    shop Dukan;
    Dukan.initCounter();
    Dukan.setPrice();
    Dukan.setPrice();
    Dukan.setPrice();
    Dukan.displayPrice();
    return 0;
}