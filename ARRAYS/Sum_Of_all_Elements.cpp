#include <iostream>
using namespace std;


int sum_arr(int a[],int size){

    int sum = 0;
    for(int i=0;i<size;i++){
        sum = sum + a[i];
    }
    return sum;
}

//  Find a element in an Array :
bool search(int arr[],int key,int size){

    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;
}

void ReverseArr(int arr[],int size){
    cout<<"Revresed Array : "<<endl;
    for(int i=size-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }
}


int main(){

    int arr[5] = {1,2,3,4,5};
    int arr2[10] = {10,20,30,1,4,6,7,-2,8,66};
    int key;
    cout<<"Enter Element To Find In Array : "<<endl;
    cin>>key;
    bool found = search(arr2,key,10);
    cout<<"\n";

    cout<<"Sum Of Elements In array : "<<sum_arr(arr,5)<<endl;
    if(found){
        cout<<"Element Present"<<endl;
    }
    else{
        cout<<"Element Absent"<<endl;
    }

    ReverseArr(arr,5);

    return 0;
}