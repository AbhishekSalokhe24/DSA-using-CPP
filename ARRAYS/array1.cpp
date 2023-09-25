#include <iostream>
using namespace std;

void Print_Arr(int arr[],int size){

    for(int i=0;i<size;i++){
        cout<<i<<"-"<<arr[i]<<"\n";
    }

}

void Enter_Arr(int arr[],int size){
    cout<<"Enter Elements in Array : "<<"\n";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
}

// Maximum in an Array
int maximum(int arr[],int size){

    int max = arr[0];
    for(int i=0;i<size;i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }
    return max;
}

// Minimum in an Array
int minimum(int arr[],int size){
    int min = arr[0];
    for(int i=0;i<size;i++){
        if(min>arr[i]){
            min = arr[i];
        }
    }
    return min;
}



int main(){

    int rol_no[6] = {11,12,13,14,15,16};
    int marks[10];
    Enter_Arr(marks,10);
    cout<<"\n";
    Print_Arr(rol_no,6);
    cout<<"Displaying Marks : "<<"\n";
    Print_Arr(marks,10);
    cout<<maximum(rol_no,6)<<"\n";
    cout<<minimum(rol_no,6);

    return 0;
}