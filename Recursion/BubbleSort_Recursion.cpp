#include <iostream>
using namespace std;

void Print_Arr(int a[],int n){
    for(int i = 0;i<n;i++){
        cout<<a[i]<<" ";
    }
}

void BubbleSort(int a[],int n){

    // Base case
    if(n==0 || n==1){
        return;
    }


    // Sort one part here 
    for(int i = 0;i<n-1;i++){
        if(a[i] > a[i+1]){
            swap(a[i],a[i+1]);
        }
    }

    
    // Recursion will sort remaning part
    BubbleSort(a,n-1);
}

int main(){

    int arr[9] = {2,1,3,8,7,5,2,9,0};
    cout<<"Before"<<endl;
    Print_Arr(arr,9);
    BubbleSort(arr,9);
    cout<<endl<<"After"<<endl;
    Print_Arr(arr,9);
    
    return 0;
}