#include <iostream>
using namespace std;

void Print_Array(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

// Bubble Sort Time Complexity : O(n^2)
void Bubble_Sort(int a[],int n){

    bool Swap_done = false; //Optimaization of code 

    for(int i=1;i<=n-1;i++){

        for(int j=0;j<n-i;j++){

            if(a[j] > a[j+1]){
                swap(a[j],a[j+1]);
                Swap_done = true; //true -- swap is done (array is not sorted)
            }

        }
        if(Swap_done == false){
            break; // case all elements are sorted
        }
    }
    Print_Array(a,n);

}

int main(){

    int arr[6] = {6,4,1,3,5,2};
    cout<<"Before Sort : "<<endl;
    Print_Array(arr,6);
    cout<<"After Sort : "<<endl;
    Bubble_Sort(arr,6);    
    return 0;
}