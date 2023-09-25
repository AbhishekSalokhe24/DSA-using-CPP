#include <bits/stdc++.h>

using namespace std;

void Print_Array(int a[],int n){
    for(int i = 0;i<n;i++){
        cout<<a[i]<<" ";
    }
}

void Sort_1_0(int arr[],int n){
    int i = 0;
    int j = n-1;
    while(i<=j){
        if(arr[i]==1 && arr[j]==0){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
        else if(arr[i] == 0){
            i++;
        }
        else if(arr[j] == 1){
            j--;
        }
    }
}

int main(){

    int test1[8] = {1,1,0,0,0,0,1,0};
    Sort_1_0(test1,8);
    Print_Array(test1,8);
    return 0;
}