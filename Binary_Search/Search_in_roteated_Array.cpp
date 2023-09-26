#include <bits/stdc++.h>

using namespace std;

int Binary_Search(vector<int> arr,int k,int start,int end){

    int mid = start + (end - start)/2;

    while(start <= end){
        if(arr[mid] == k){
            return mid;
        }
        else if(arr[mid] < k){
            start = mid + 1;
        }
        else if(arr[mid] > k){
            end = mid - 1;
        }
            mid = start + (end - start)/2;
    }

}

int Pivot(vector<int> arr){

    int start = 0;
    int end = arr.size()-1;
    int mid = start + (end-start)/2;

    while(start < end){

        if(arr[mid] >= arr[0]){
            start = mid + 1;
        }
        else{
            end = mid;
        }
        mid = start + (end-start)/2;
    }
    return start;
}

int Find_key(vector<int> arr,int k){
   
    int pivot = Pivot(arr);
    int s = 0;
    int e = arr.size() - 1;

    if(k >= arr[pivot]  && k <= arr[e]){
        return Binary_Search(arr,k,pivot,e);
    } 
    else{
        return  Binary_Search(arr,k,0,pivot-1);
    }
    return -1;
}


int main(){

    vector<int> test = {10,20,30,40,2,11,15,27,60};

    cout<<"Element Present at : "<<Find_key(test,2)<<endl;

    return 0;
}