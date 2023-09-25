#include <iostream>
#include <vector>

using namespace std;

vector<int> Rotate_Arr(vector<int> &a,int k){

    vector<int> temp(a.size());

    for(int i=0;i<a.size();i++){
        temp[(i+k)%a.size()] = a[i];   
    }
    a = temp;
    return temp;
}

void Print_Arr(vector<int> &a,int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main(){

    vector<int> arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);
    cout<<"Before Rotate : "<<endl;
    Print_Arr(arr,4);
    vector<int> ans = Rotate_Arr(arr,2);
    Print_Arr(ans,4);
    return 0;
}