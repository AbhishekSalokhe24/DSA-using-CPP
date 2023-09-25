#include <bits/stdc++.h>

using namespace std;



vector<vector<int>> Pair_Sum(vector<int> a,int k){
   
    vector<vector<int>> ans;
    for(int i=0;i<a.size();i++){
        for(int j=i+1;j<a.size();j++){
            if(a[i] + a[j] == k){
                 vector<int> temp;
                 temp.push_back(min(a[i],a[j]));
                 temp.push_back(max(a[i],a[j]));
                 ans.push_back(temp);
        }
        }
    }
   
    sort(ans.begin(),ans.end());
    return ans;
}

int main(){

    vector<int> nums = {1 ,2 ,3 ,4 ,5};
    vector<vector<int>> op = Pair_Sum(nums,5);

   for(int i=0; i<op.size();i++){
    for(int j=0; j<op.size();j++){
        cout<<op[i][j]<<" ";        
    }
    cout<<endl;
   }
    return 0;
}