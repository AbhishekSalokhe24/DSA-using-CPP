#include<iostream>
using namespace std;

void Print_Number(int n){

    if(n == 0){
        return;
    }
    string digits[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"}; 

    
    int t = n%10;
    Print_Number(n/10); 
    
    cout<<" "<<digits[t]<<" ";
 
}   


int main() {

    //print 123 = one two three
    int num  = 0;
    cout<<"Enter a number : "<<endl;
    cin>>num;
    Print_Number(num);

    return 0;
}