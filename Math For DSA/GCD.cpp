#include <iostream>
using namespace std;

int GCD(int a,int b){

    if(a == 0){
        return b;
    }
    if(b == 0){
        return a;
    }
    // formula GCD(a-b,b) OR GCD(a%b,b)
    while(a!=b){
        if(a>b){
            a = a-b;
        }
        else{
            b = b-a;
        }
    }
    return a;
}

int main(){

    int x;
    int y;
    cout<<"Enter 2 Numbers : "<<endl;
    cin>>x;
    cin>>y;
    cout<<"GCD of "<<x<<" and "<<y<<" is: "<<GCD(x,y);
    return 0;
}