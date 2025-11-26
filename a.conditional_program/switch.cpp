#include <iostream>
using namespace std;

int main(){
    const int Pen{10};
    const int Ellipse{20};
    const int Bucket{30};
    int tool{Ellipse};
    switch(tool){
        case Ellipse : cout << "Its an Ellipse" << endl;break;
        case Pen : cout << "Its a Pen" << endl; break;
        case Bucket : cout << "Its a Bucket" << endl; break;
        default : cout << "Its none of them" <<endl; break;
    }
}