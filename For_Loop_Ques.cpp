#include <iostream>
using namespace std;

int main(){

    // int n = 5; 
    // int sum = 0;
    // for(int i=1;i<=n;i++){
    //     //sum = sum + i;
    //     sum += i;
    // }
    // cout<<"Sum : "<<sum<<endl;

    for(int i=0;i<=5;i++){
        for(int j=i;j<=5;j++){

            if(i+j==10){
                break;
            }
            cout<<i<<" "<<j<<endl;
        }
    }
    

    return 0;
}