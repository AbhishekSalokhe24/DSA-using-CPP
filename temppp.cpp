#include <bits/stdc++.h>

using namespace std;

// void Print_Array(int a[],int n){
//     for(int i = 0;i<n;i++){
//         cout<<a[i]<<" ";
//     }
// }


int First_Occur(int arr[],int n,int k){
    int start = 0;
    int end = n-1;

    int mid = start + (end - start)/2;
    int ans = -1;

    while(start <= end){
        if(arr[mid] == k){
            ans = mid;
            end = mid - 1;
        }
        else if(arr[mid] > k){
            end = mid - 1;
        }
        else if(arr[mid] < k){
            start = mid + 1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}

int Last_occur(int a[],int n,int k){

    int start = 0;
    int end = n-1;

    int mid = start + (end-start)/2;
    int ans = -1;

    while(start <= end){

        if(a[mid] == k){
            ans = mid;
            start = mid + 1;
        }
        else if(a[mid] < k){
            start = mid + 1;
        }
        else if(a[mid] > k){
            end = mid - 1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}

int main(){

    int test1[8] = {0 ,0 ,1 ,1 ,2 ,2 ,2 ,2};
    cout<<First_Occur(test1,8,2)<<endl;
    cout<<Last_occur(test1,8,2)<<endl;
    return 0;
}