#include <iostream>
using namespace std;

void PrintArr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}

void Alter_Swap(int arr[],int n){

    for(int i=0;i<n;i=i+2){
        if(i<n-1){
            swap(arr[i],arr[i+1]);
        }
    }
    PrintArr(arr,n);
}

int main(){
    int even[4] = {1,2,3,4};
    int odd[5] = {1,2,3,4,5};
    PrintArr(even,4);
    Alter_Swap(even,4);
    PrintArr(odd,5);
    Alter_Swap(odd,5);
    return 0;
}