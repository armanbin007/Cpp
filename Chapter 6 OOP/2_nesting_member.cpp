#include <iostream>
#include <string.h>
using namespace std;
class binary{
    private:
    string s; // by default it is a private data if not written private in class;
    void chk_bin();
    public:
    void read();
    void ones_complement();
    void display();

}; void binary :: read(){
    cout << "Enter a binary number ";
    cin >> s;
}
    void binary :: chk_bin(){
        for (int i = 0; i < s.length(); i++){
            if(s.at(i) != '0' && s.at(i) != '1'){
                cout << "Incorrect binary format" <<endl;
                exit(0);
            }
        }
    } void binary :: ones_complement(){
        for (int i = 0; i < s.length(); i++){
            if(s.at(i) == '0'){
                s.at(i) = '1';
            } else if(s.at(i) == '1'){
                s.at(i) = '0';
            }
        } cout << "The one's complemented binary is: ";
        for (int i = 0; i < s.length(); i++){
            cout << s.at(i);
        }  cout <<endl;
    }
      void binary :: display(){
        chk_bin();  // Here before displaying the binary it will chk if the bianry is incorrect or not.
            cout << "The binary is: ";
        for (int i = 0; i < s.length(); i++){
            cout << s.at(i);
        }  cout <<endl;
    }
int main(){
    binary b;
    b.read();
    // b.chk_bin(); //You can't use it directly because it is private now;
    b.display();
    b.ones_complement();
    return 0;
}