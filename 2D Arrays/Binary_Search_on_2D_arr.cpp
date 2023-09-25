#include <iostream>
#include <vector>
using namespace std;

// ---**** Time Complexity : O(log mn)

bool Binary_Search(vector<vector<int>>& matrix,int k){

    int row = matrix.size();
    int col = matrix[0].size();
    int s = 0;
    int e = row * col - 1;
    int mid = s + (e-s)/2;

    while(s<=e){

        int element = matrix[mid / col][mid % col];

        if(element == k){
            return 1;
        }
        if(element < k){
            s = mid + 1;
        }
        else if(element > k){
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return 0;
}

int main(){

    vector<vector<int>> arr = {{11,22,33},{44,55,84},{98,85,66}};
    int key = 0;
    cout<<"Enter Key to find : "<<endl;
    cin>>key;
    if(Binary_Search(arr,key)){
        cout<<"Element Present"<<endl;
    }
    else{
        cout<<"Element Not Present"<<endl;
    }


    return 0;
}