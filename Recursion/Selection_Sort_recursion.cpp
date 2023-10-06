#include <iostream>
using namespace std;

void Print_Arr(int a[],int n){
    for(int i = 0;i<n;i++){
        cout<<a[i]<<" ";
    }
}

void Selection_sort(int a[],int idx,int n){

    int small_idx = idx;
    
    if(idx == n){
        return;
    }

    // Sort one part here 
    for(int i = idx+1;i<n;i++){
        if(a[small_idx] > a[i]){
            small_idx = i;
        }
        
    }
    swap(a[small_idx],a[idx]);

    // Recursion will sort remaning part
    Selection_sort(a,idx+1,n);
    
   
}

int main(){

    int arr[9] = {2,1,3,8,7,5,2,9,0};
    cout<<"Before"<<endl;
    Print_Arr(arr,9);
    Selection_sort(arr,0,9);
    cout<<endl<<"After"<<endl;
    Print_Arr(arr,9);
    return 0;
}