#include <iostream>
using namespace std;

int Pivot(int arr[],int n){

    int start = 0;
    int end = n-1;
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

int main(){

    int arr[4] = {2,3,5,8};
    int p = Pivot(arr,4);
    cout<<"Pivot Element : "<<arr[p]<<endl;
    return 0;
}
