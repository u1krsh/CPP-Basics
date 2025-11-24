#include <iostream>
using namespace std;
int addNum(int a, int b){
    int sum;
    sum = a+b;
    return sum;
}

int main(){
    int num1 =2 ;
    int num2 =3 ;
    cout << addNum(num1, num2) << endl;
}