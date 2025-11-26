#include <iostream>
using namespace std ;

int main(){const int Ellipse{10};
const int Pen{20};


int tool{Ellipse};
if(tool==Ellipse){
    cout << "Its an Ellipse" << endl;
}
else if(tool==Pen){
    cout << "Its a Pen" << endl;
}
return 0;
}