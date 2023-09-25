#include <iostream>
#include <vector>

using namespace std;

void FindDuplicate(vector<int> nums){

    int n = nums.size();
    vector<int> temp;
    vector<int> a;
    int t = 0;
    int ans = 0;

    for(int i=0;i<n;i++){
        t = 0 ^ nums[i];
        temp.push_back(t);
        
        ans = nums[i]  ^ temp[i];

        if(ans == 0){
            a.push_back(nums[i]);
        }
        
    }


    for(int i:a){
        cout<<i<<" ";
    }



}

int main(){

    vector<int> arr = {6 ,3 ,1, 5 ,4 ,3 ,2};
    FindDuplicate(arr);
    return 0;
}