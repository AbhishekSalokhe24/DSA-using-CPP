#include <iostream> 
using namespace std;

void Merge_Sorted_Arr(int arr1[],int n,int arr2[],int m,int arr3[]){

    int i = 0;
    int j = 0;
    int k = 0;

    while(i<n && j<m){

        if(arr1[i] < arr2[j]){
            arr3[k] = arr1[i];
            k++;
            i++;
        }
        else{
            arr3[k] = arr2[j];
            k++;
            j++;
        }

    }
    // case Where 1st array have less elements to campare
    while(i < n){
        arr3[k] = arr1[i];
        k++;
        i++;
    }
    // case Where 2nd array have less elements to campare
    while(j < m){
        arr3[k] = arr2[j];
        k++;
        j++;
    }
}

void Print_Arr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){

    int arr1[5] = {1,4,5,6,7};
    int arr2[4] = {2,3,8,9};
    int arr3[9] = {0};

    Merge_Sorted_Arr(arr1,5,arr2,4,arr3);
    cout<<"Merged Sorted Array 3 is "<<endl;
    Print_Arr(arr3,9);

    return 0;
}