#include <iostream> 
using namespace std;

void update(int *p){
    *p = *p+1;
    // return p;
}

void SumArr(int *arr,int n){
    int sum = 0;
    cout<<sizeof(*arr)<<endl;
    for(int i=0;i<n;i++){
        sum = sum+arr[i];
    }
    cout<<sum<<endl;
}

int main(){

    int num = 10;
    int *a = &num;
    update(a);
    cout<<*a<<endl;
    int array[5] = {10,10,10,10,10};
    // to pass only some part of array
    SumArr(array+1,3);
    return 0;
}