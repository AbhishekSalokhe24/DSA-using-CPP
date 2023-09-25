#include <bits/stdc++.h>
using namespace std;

void LargeSmallSum(vector<int> &arr){
    
    int n = arr.size();
    vector<int> even;
    vector<int> odd;

    if(n%2==0){
        for(int i=0;i<(n/2);i++){

            int temp = arr[i];
            //
            even.push_back(temp);

            //
            odd.push_back(temp);

        }
    }

    if(n%2!=0){
        int temp2 = arr.size()-1;
        for(int i=0;i<(n/2);i++){
            int temp = arr[i];
            //
            even.push_back(temp);

            //
            odd.push_back(temp);

        }
        //
        even.push_back(temp2);
    }

    sort(even.begin(),even.end());
    sort(odd.begin(),odd.end());

    int sum = even.size()-2 + odd.size()-2;

    cout<<"Even Arr: "<<endl;
    for(int i=0;i<even.size();i++){
        cout<<even[i]<<" ";
    }
    cout<<endl;
    cout<<"Odd Arr: "<<endl;
    for(int i=0;i<odd.size();i++){
        cout<<odd[i]<<" ";
    }
    cout<<endl;
    cout<<"Sum Of Small & Large : "<<sum<<endl;

}

int main(){

// def LargeSmallSum(arr)
// The function accepts an integers arr of size ’length’ as its arguments you are required to return the sum of second largest  element from the even positions and second smallest from the odd position of given ‘arr’

vector<int> v;
 int temp = 0;
for(int i=0;i<v.size();i++){
    //
    v.push_back(temp);
}

LargeSmallSum(v);
return 0;
}