#include <iostream>
using namespace std;

void Insertion_sort(int a[],int n){

    int temp = 0;

    for(int i = 1;i<n;i++){
        temp = a[i];

        int j = i-1;
        while(j >= 0 && a[j] > temp){
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = temp;
    }
}

int main(){

    int arr[5] = {5,4,3,2,1};
    Insertion_sort(arr,5);
    for(int i = 0;i < 5;i++){
        cout<<arr[i]<<" ";
    }

}