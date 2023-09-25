#include <iostream>
using namespace std;

int factorial(int n){

    int fact = 1;
    for(int i=1;i<=n;i++){
        fact = fact * i;
    }
    return fact;
}

int nCr(int n,int r){

    int ans = 0;
    int deno = factorial(r) * factorial(n-r);
    ans = factorial(n)/deno;
    return ans;
}

int main(){

    int num,r;
    cout<<"Enter N : "<<"\n";
    cin>>num;
    cout<<"Enter r : "<<"\n";
    cin>>r;
    cout<<"nCr = "<<nCr(num,r);
    return 0;
}