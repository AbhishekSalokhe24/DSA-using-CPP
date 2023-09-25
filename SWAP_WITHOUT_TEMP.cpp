#include <iostream>
using namespace std;



int main(){

    int  a = 1;
    int  b = 2;

    a = a + b; //a = 3
    b = a - b; //b = 3-2 = 1
    a = a - b; //a = 3 - 1 = 2
    cout<<"a: "<<a<<" b: "<<b;

    return 0;
}