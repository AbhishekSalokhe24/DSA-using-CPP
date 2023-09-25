#include <iostream>
using namespace std;

void sumof(int n){

    int even_count = 0;
    int odd_count = 0;

    // int sum_even = 0;
    // int sum_odd= 0;

    while(n!=0){
        int digit = n%10;
        if(n%2==0){
            even_count = even_count + digit;
        }
        else{
            odd_count = odd_count + digit;
        }
        n = n/10;
    }

    cout<<"Even Count : "<<even_count<<endl;
    cout<<"Odd Count  : "<<odd_count<<endl;

}

int main(){

    int num = 0;
    cout<<"Enter a Number : "<<endl;
    cin>>num;

    sumof(num);
    return 0;
}