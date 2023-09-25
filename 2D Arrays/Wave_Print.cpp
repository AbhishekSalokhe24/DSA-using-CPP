#include <iostream>
#include <vector>

using namespace std;

// https://www.codingninjas.com/studio/problems/print-like-a-wave_893268

vector<int> WavePrint(vector<vector<int>> arr,int nRows,int mCols){

    vector<int> ans;
    for(int col = 0 ; col < mCols ; col++){
        
          // check = column no. is odd Or Even
        if(col%2==1){
            for(int row = nRows-1 ; row>=0 ; row--){
                ans.push_back(arr[row][col]);
            }
        }
        else{
            for(int row=0;row<nRows;row++){
                ans.push_back(arr[row][col]);
            }
        }
    }
    return ans;

}

int main(){ 

    vector<vector<int>> a;
    a.push_back({1,2,3});
    a.push_back({4,5,6});
    a.push_back({7,8,9});
    

    vector<int> wave = WavePrint(a,3,3);
    for(int i:wave){
        cout<<i<<" ";
    } 

    return 0;
}