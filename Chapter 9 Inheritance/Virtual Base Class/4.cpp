#include <iostream>
using namespace std;
class Device { // Base class
  public:
    void showDevice(){
        cout << "Electronic Device";
    }
};
class Laptop : virtual public Device{ // Hierchical Inh.
};
class Tablet : virtual public Device{ //  Hierchical Inh.
};
class HybridDevice : public Laptop, public Tablet{ // Multiple Inh.
};
int main(){
    HybridDevice hd;
    hd.showDevice(); // No ambiguity due to virtual inheritance
}