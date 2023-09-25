#include<iostream>
using namespace std;

bool isPrime(int num){

    for(int i=2;i<num;i++){
        if(num%i==0){
            return 0;
        }
    }
    return 1;
}

int main(){

    int n;
    cout<<"Enter a Number : "<<endl;
    cin>>n;

    if(isPrime(n)){
        cout<<n<<" is a prime No."<<endl;
    }
    else{
        cout<<n<<" is a NOT prime No."<<endl;
    }
    return 0;
}