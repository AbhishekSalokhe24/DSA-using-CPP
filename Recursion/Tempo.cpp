#include<iostream>
using namespace std;
 
void Bubble_Sort(int a[],int n){

    for(int i = 1;i<n;i++){

        for(int j = 0;j <n-1;j++){
            if(a[j] > a[j+1]){
                swap(a[j],a[j+1]);
            }
        }
    }
}


int main() {

    // Implement Bubble sort
    int arr[6] = {6,5,4,3,2,1};
    cout<<"Before"<<endl; 
    for(int i = 0;i<6;i++){
        cout<<" "<<arr[i]<<" ";
    }
    Bubble_Sort(arr,6);
    cout<<endl<<"After"<<endl;
    for(int i = 0;i<6;i++){
        cout<<" "<<arr[i]<<" ";
    }
    return 0;
}