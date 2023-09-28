#include <iostream>
using namespace std;

int sum_arr(int *arr,int n){
    int sum = 0;
    for(int i = 0;i<n;i++){
        sum = sum + arr[i];
    }
    return sum;
}

int main(){

    int n = 05 ;
    cout<<"Enter Size Of Array You want :"<<endl;
    cin>>n;

    // variable size Array created

    int *arr = new int[n];
    cout<<"Enter Elements here :  "<<endl;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    int sum = sum_arr(arr,n);

    cout<<"Sum Of Array :  "<<sum<<endl; 

    return 0;
}
