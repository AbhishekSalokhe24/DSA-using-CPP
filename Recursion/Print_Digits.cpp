#include <iostream>
using namespace std;

// if input: 123 output: one two three

void Print_Numbers(int n,string arr[]){
    
    // Base case
    if(n == 0){
        return;
    }

    // Processing
    int digit = n%10;
    n = n/10;
    Print_Numbers(n,arr);
    cout<<" "<<arr[digit]<<" ";
}

int main(){

    // int n;
    // cout<<"Enter a number : "<<endl;
    // cin>>n;

    string nums[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    //Print_Numbers(n,nums);
    cout<<(123/10);
    return 0;
}