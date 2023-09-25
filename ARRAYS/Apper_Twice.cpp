#include <iostream>
#include <vector>

using namespace std;

vector<int> FindDuplicates(vector<int> nums){

    int n = nums.size();    
    vector<bool> visited(n,false);
    vector<int> ans;

    for(int i=0;i<n;i++){
        
        int count = 1;
        if(visited[i] == true){
            continue;
        }
        for(int j=i+1;j<n;j++){
            if(nums[i] == nums[j]){
                count++;
                visited[j] = true;
                if(count == 2){
                    ans.push_back(nums[j]);
                }

            }
        }
    }
    return ans;
}


int main(){
    
    vector<int> val = {1,2,3,4,5,4,2,9,1};
    vector<int> temp_ans = FindDuplicates(val);
    for(int i:temp_ans){
        cout<<i<<" ";
    }
    return 0;
}