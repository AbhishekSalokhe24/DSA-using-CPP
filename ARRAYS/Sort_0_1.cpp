#include <iostream>
using namespace std;

void PrintArr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void Sort_Z_one(int arr[],int n){

    int i = 0;
    int j = n-1;

    while(i < j){
        while(arr[i]==0 && i<j){
            i++;
        }
        while(arr[j]==1){
            j--;
        }
        if(i<j){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    PrintArr(arr,n);
}

int main(){
    cout<<"Before Swap : "<<endl;
    int arr[10] = {0,1,0,1,0,0,1,1,1,0};
    PrintArr(arr,10);
    cout<<"\n";
    cout<<"After Swap : "<<endl;
    Sort_Z_one(arr,10);
    return 0;
}