#include <iostream>
using namespace std;

void PrintArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}

void reverse(int arr[],int size){

    int start = 0;
    int end = size-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    cout<<"Reversed Array : "<<endl;
    PrintArray(arr,size);
}



int main(){

    int arr[5] = {1,4,6,8,9};
    PrintArray(arr,5);
    reverse(arr,5);

    return 0;
}