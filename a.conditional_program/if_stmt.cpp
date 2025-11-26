#include <iostream>
using namespace std;


int main(){int number1 {55};
int number2 {45};

bool res = (number1 > number2);

if(res == true){
    cout << number1 << "is greater than" << number2 << endl;
}
if(!(res==true)){
    cout << number1 << "is not smaller than" << number2 << endl;
}

}