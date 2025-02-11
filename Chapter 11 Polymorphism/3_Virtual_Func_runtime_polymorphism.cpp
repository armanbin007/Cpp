#include <iostream>
using namespace std;
class CHW{
    protected:
        string title;
        float rating;
    public:
        CHW(string s, float r){
            title = s;
            rating = r;
        } virtual void display(){}  /* It won't be used as it is virual function.
                                       But if we don't redefine this funtion in 
                                       derived class then this function will be called */
}; class CHWVideo : public CHW{
    float VideoLenght;
    public:
        CHWVideo(string s, float r, float vl) : CHW(s, r){
            VideoLenght = vl;
        } void display(){
            cout << "Title: " << title <<endl;
            cout << "Rating: " << rating <<" out of 5"<<endl;
            cout << "Video Lenght: " << VideoLenght <<endl;
        }
}; class CHWText : public CHW{
    int words;
    public:
        CHWText(string s, float r, int word) : CHW(s, r){
            words = word;
        } void display(){
            cout << "Title: " << title <<endl;
            cout << "Rating: " << rating <<" out of 5"<<endl;
            cout << "Text Lenght: " << words <<" words" <<endl;
        }
}; 
int main(){
    string title;
    float ratings, vlenght;
    int word;

    title = "C++ tutorial 100";
    ratings = 5.00;
    vlenght = 30.15;
    word = 287;
    CHWVideo HarryVideo(title, ratings, vlenght);
    CHWText HarryText(title, ratings, word);

    CHW * arr[2];  // Base class pointer
    arr[0] = &HarryVideo;
    arr[1] = &HarryText;
    
    arr[0] -> display();
    cout <<endl <<endl;
    arr[1] -> display();

    return 0;
}