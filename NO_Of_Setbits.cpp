#include <iostream>
using namespace std;


int NoOf_setbits(int n){

    int count = 0;
    while(n){
        count = count + (n&1);
        n = n>>1;
    }
    return count;
}

int main(){

    int a;
    cout<<"Enter a No. "<<endl;
    cin>>a;
    cout<<"No. of set bits: "<<NoOf_setbits(a);
    return 0;
}