#include <iostream>
using namespace std;

int BinarySearch(int arr[],int size,int key){

    int start = 0;
    int end = size-1;

    int mid = start + (end-start)/2;

    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        if(key>arr[mid]){
            start = mid+1;
        }
        // key < arr[mid]
        else{
            end = mid - 1;
        }

        mid = start + (end - start)/2;
    }

    return -1;
}

int main(){

    int arr1[6] = {5,11,13,17,19,27};
    int arr2[5] = {3,8,11,14,16};
    int k1,k2;
    cout<<"Enter Key array 1: "<<"\n";
    cin>>k1;
    cout<<"Enter Key array 2: "<<"\n";
    cin>>k2;
    cout<<k1<<" at index "<<BinarySearch(arr1,6,k1)<<"\n";
    cout<<k2<<" at index "<<BinarySearch(arr2,5,k2);
    return 0;
}