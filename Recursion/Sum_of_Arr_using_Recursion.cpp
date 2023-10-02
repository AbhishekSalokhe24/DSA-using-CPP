#include <iostream>
using namespace std;


int Sum_Arr(int arr[],int size){

    //base case : empty Array
    if(size == 0){
        return 0;
    }
    //base case single element
    if(size == 1){
        return arr[0];
    }
    int sum = 0;
    // Recursive call
    int rem_sum = Sum_Arr(arr+1,size-1);
    sum = arr[0] + rem_sum;
    return sum;
}



int main(){

    int arr[5] = {2,2,2,2,2};
    
    int ans = Sum_Arr(arr,5);
    cout<<"Sum of array elements :"<<ans<<endl;
    return 0;
}