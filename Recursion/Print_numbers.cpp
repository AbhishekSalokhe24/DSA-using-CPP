#include <iostream>
using namespace std;

void Print_Numbers(int n){

    if(n == 0){
        return ;
    }
    
    //cout<<n<<endl;  //5 4 3 2 1
    Print_Numbers(n-1);
    cout<<n<<endl;    //1 2 3 4 5
}

int main(){

    int n ;
    cout<<"Enter N : "<<endl;
    cin>>n;
    cout<<endl;
    Print_Numbers(n);
    return 0;
}