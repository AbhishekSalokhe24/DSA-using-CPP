#include<bits/stdc++.h>
using namespace std;

void PrintArr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}

void alter(int arr[],int n){
    for(int i=0;i<n;i=i+2){
        
            if(i<n-1){
            swap(arr[i],arr[i+1]);
            }
        
    }
}

int main(){

    int arr[5] = {1,2,3,4,5};
    alter(arr,5);
    PrintArr(arr,5);
    return 0;
}