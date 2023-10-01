#include <iostream>
using namespace std;

void Print_Fibonaccii(int n){
    
    int n1 = 0;
    int n2 = 1;
    int i = 1;
     int n3  = 0;
    cout<<n1<<" "<<n2<<" ";

    while(i<=n){
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
         cout<<n3<<" ";
        i++;
    }
    
}

int Nth_Fibo(int n){
    
    if(n == 0){     //if we start indexing from 0 else 1
        return 0;
    }
    else if (n == 1){
        return 1;
    }
   
    int ans = Nth_Fibo(n-1) + Nth_Fibo(n-2);
    return ans;

    
}

int main(){

    //0 1 1 2 3 5 8 13 
    int nth = 0;
    cout<<"Enter Which nth Fibonacci Number You Want : "<<endl;
    cin>>nth;
    int a = Nth_Fibo(nth);
    cout<<nth<<"th Fibonacci Number is :  "<<a<<endl;
    Print_Fibonaccii(nth);
    return 0;
}