#include <iostream>
using namespace std;
class Student{
    protected:
    int roll;
    public:
    void set_roll(int x){
        roll = x;
    } void get_roll(){
        cout << "The roll is: "<< roll <<endl;
    }
}; class Exam : public Student{
    protected:
    float maths, physics;
    public:
    void set_marks(float m, float n){
        maths = m;
        physics = n;
    } void get_marks(){
        get_roll();
        cout << "Marks of Math: "<< maths <<endl;
        cout << "Marks of Physics: "<< physics <<endl;
    }
}; class Result : public Exam{
    float percentage;
    public:
    void display();
}; void Result :: display(){
    cout << "The percentage is : "<< (maths+physics)/2 <<" %" <<endl;
}
int main(){
    Result arman;
    arman.set_roll(2189);
    arman.set_marks(96, 80.75);
    arman.get_marks();
    arman.display();
    return 0;
}
/*
    Here the inheritance path is like this:
    Student ---> Exam ----> Result
*/