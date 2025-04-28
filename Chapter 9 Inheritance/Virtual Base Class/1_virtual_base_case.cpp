#include <iostream>
using namespace std;
class Student{
    protected:
        int roll;
    public:
        void set_roll(int a){
            roll = a;
        } void print_roll(){
            cout << "Roll : "<< roll <<endl;
        }
}; class Test : virtual public Student{ // here we used virtual to inherit set_roll(); function only once.
    protected:                          // if we don't use virtual then in main func. when set_roll is called
        float maths, programming;           // it will throw a ambiguity error....
    public:
        void set_marks(float a, float b){
            maths = a; programming = b;
        } void print_marks(){
            cout << "Math = "<<maths <<endl;
            cout << "programming = "<<programming <<endl;
        }
}; class Sports : virtual public Student{
    protected:
        float score;
    public:
        void set_score(float a){
            score = a;
        } void print_score(){
            cout << "Score = "<<score <<endl;
        }
}; class Result : public Test, public Sports{
    float total;
    public:
        void display(){
            total = maths + programming + score;
            print_roll();
            print_marks();
            print_score();
            cout << "Total marks is = "<< total <<endl;
        }
}; 
int main(){
    Result arman;
    arman.set_roll(2189);
    arman.set_marks(96, 82);
    arman.set_score(80);
    arman.display();
    return 0;
}