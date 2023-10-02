#include <iostream>
using namespace std;

void PrintArr(int arr[],int s,int e){
    for(int i=s;i<=e;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

bool BinarySearch_rec(int arr[],int start,int end,int k){


    PrintArr(arr,start,end);
    // if we travered whole Array
    if(start > end){
        return false;
    }

    int mid = start + (end-start)/2;
    cout<<"mid : "<<mid<<endl;
    // Base case if element found
    if(arr[mid] == k){
        return true;
    }
    if(k > arr[mid]){
        return BinarySearch_rec(arr,mid+1,end,k);
    }
    else if(k < arr[mid]){
        return BinarySearch_rec(arr,start,mid-1,k);
    }
    
}

int main(){

    int arr[5] = {10,20,50,80,5};
    int key = 0;
    cout<<"Enter a Key: "<<endl;
    cin>>key;

    if(BinarySearch_rec(arr,0,4,key)){
        cout<<"Key found"<<endl;
    }
    else{
        cout<<"Key not found"<<endl;
    }
    return 0;
}