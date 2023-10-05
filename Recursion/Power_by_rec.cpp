#include <iostream>
using namespace std;

int power(int base,int raise){
    
   
    // Base case
    if(raise == 0){
        return 1;
    }
    if(raise == 1){
        return base;
    }

     int ans = power(base,raise/2) ;
     
    if(raise % 2 == 0){
        return  ans * ans;
    }
    else{
        return base * ans * ans;
    }
}

int main(){

    int b = 0;
    int r = 0;
    cout<<"Enter base :  "<<endl;
    cin>>b;
    cout<<"Entet raise : "<<endl;
    cin>>r;
    cout<<b<<" ^ "<<r<<" : "<<power(b,r)<<endl;

}