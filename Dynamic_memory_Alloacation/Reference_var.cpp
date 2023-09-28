#include <iostream>
using namespace std;

void Update(int n){
    n++;
}

int main(){

    // int i = 5;

    // Reference Variable created here  : 
    // int& j = i;
    // cout<<i<<endl;
    
    // cout<<j<<endl;
    
    // i++;
    // cout<<i<<endl;
    // cout<<"Reference Var : "<<j<<endl;
    
    int t = 1;
    Update(t);
    cout<<t<<endl;
    return 0;
}