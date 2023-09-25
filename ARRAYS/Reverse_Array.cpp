#include <iostream>
#include <vector>

using namespace std;

// Reverse Array After Some Specific Index ::

vector<int> Reverese(vector<int> a,int idx){

    int start = idx + 1;
    int end = a.size() - 1;

    while(start <= end){
        swap(a[start],a[end]);
        start++;
        end--;
    }
    return a; //returning a Vector
}

void Print_Arr(vector<int> a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main(){

    vector<int> Arr;

    Arr.push_back(5);
    Arr.push_back(2);
    Arr.push_back(9);
    Arr.push_back(1);
    Arr.push_back(3);
    Arr.push_back(4);

    vector<int> ans = Reverese(Arr,3);
    Print_Arr(ans);
    return 0;
}