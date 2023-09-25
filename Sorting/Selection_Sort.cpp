#include <iostream>
using namespace std;

void Print_array(int a[],int n){
    
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
// Selection Sort Time Complexity : O(n^2)
void Selection_Sort(int a[],int n){

    int min = 0;
    for(int i=0; i<n; i++){

        min = i;
        for(int j=i+1; j<n; j++){

            if(a[min] > a[j]){
                min = j;
            }
        }

        swap(a[i],a[min]);
    }
    Print_array(a,n);
}

int main(){

    int arr[5] = {10,99,5,15,40};
    cout<<"Before Sort : "<<"\n";
    Print_array(arr,5);

    cout<<"\n";
    
    cout<<"After Sort : "<<endl;
    Selection_Sort(arr,5);
    return 0;
}