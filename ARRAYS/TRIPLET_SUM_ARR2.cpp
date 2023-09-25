#include <iostream>
#include <vector>

using namespace std;

void Print_Arr(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<i<<" ";
    }
    cout<<endl;
}

void Triplet_Sum(int num[],int n,int key){
    
    bool flag = 0;
    vector<int> ans;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(num[i]+num[j]+num[k] == key){
                    flag = 1;
                    ans.push_back(num[i]);
                    ans.push_back(num[j]);
                    ans.push_back(num[k]);
                }
            }
        }
    }

    if(flag){
        cout<<"Triplets found"<<endl;
        cout<<"Printing Triplets : "<<endl;
        for(int j : ans){
             cout<<j<<"  ";
        }
    }
    else{
        cout<<"Triplets Not found"<<endl;

    }
    cout<<endl;
}

int main(){


    int arr[5] = {1,2,3,4,5};
    int k = 12;

    Triplet_Sum(arr,5,k);
    

    return 0;
}
