#include <bits/stdc++.h>

using namespace std;

vector<int> Intersection(vector<int> arr1,vector<int> arr2){
    int n = arr1.size();
    int m = arr2.size();

    vector<int> ans;
    int i = 0;
    int j = 0;
    while(i<n && j<m){
        if(arr1[i] == arr2[j]){
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
        else if(arr1[i] < arr2[j]){
            i++;
        }
        else{
            j++;
        }
    }
    return ans;
}

int main(){

    vector<int> test1 = {1 ,2 ,2 ,2 ,3 ,4};
    vector<int> test2 = {2 ,2 ,3 ,3};

    vector<int> op = Intersection(test1,test2);

    for(int i : op){
        cout<<i<<" ";
    }
    return 0;
}