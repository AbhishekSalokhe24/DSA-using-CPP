#include <iostream>
using namespace std;

bool isSorted(int arr[],int size){
    
    // Base case 
    if(size == 0 || size == 1){
        return true;
    }
    
    if(arr[0] > arr[1]){
        return false;
    }
    else{
        bool ans = isSorted(arr+1,size-1);
        return ans;
    }


}

int main(){

    int arr[5] = {2,10,15,16,20};
    if(isSorted(arr,5)){
        cout<<"Array is sorted"<<endl;
    }
    else{
        cout<<"Array is Not sorted"<<endl;
    }
    return 0;
}