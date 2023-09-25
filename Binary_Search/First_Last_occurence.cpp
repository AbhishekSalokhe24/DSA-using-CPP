#include <iostream>
using namespace std;

int First_Occur(int arr[],int size,int key){

    int start = 0;
    int end = size - 1;

    int mid = start + (end-start)/2;
    int ans = -1;

    while(start<=end){

        if(arr[mid]==key){
            ans = mid;
            end = mid - 1;
        }
        else if(key>arr[mid]){
            start = mid + 1;
        }
        else if(key<arr[mid ]){
            end = mid - 1;
        } 

        mid = start + (end-start)/2;
    }

    return ans;
}

int Last_Occur(int arr[],int size,int key){

   int start = 0;
    int end = size - 1;

    int mid = start + (end-start)/2;
    int ans = -1;

    while(start<=end){

        if(arr[mid]==key){
            ans = mid;
            start = mid + 1;
        }
        else if(key>arr[mid]){
            start = mid + 1;
        }
        else if(key<arr[mid ]){
            end = mid - 1;
        } 

        mid = start + (end-start)/2;
    }

    return ans;
}


int main(){

    int a[7] = {1,2,3,3,3,3,3};
    int key = 3;
    cout<<"First Occurencre of Key "<<key<<" at index : "<<First_Occur(a,7,key)<<endl;
    cout<<"Last Occurencre of Key "<<key<<" at index : "<<Last_Occur(a,7,key)<<endl;

    return 0;
}