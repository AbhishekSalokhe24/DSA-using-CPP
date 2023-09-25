#include <iostream>
#include <vector>

using namespace std;

bool Print_Freq(vector<int> arr,int n){

    vector<bool> visited(n,false);
    vector<int> elements;
    for(int i=0;i<n;i++){

        if(visited[i] == true){
            continue;
        }

            int count = 1;
            for(int j=i+1;j<n;j++){
                if(arr[i] == arr[j]){
                    count++;
                    visited[j] = true;
                }
            }
         elements.push_back(count);
        //  cout<<arr[i]<<" : "<<elements[i]<<" "<<endl;
    }
    for(int i:elements){
        for(int j=i+1;j<elements.size();j++){
            if(elements[i] == elements[j]){
                return false;
            }
        }
    }
    return true;
}

int main(){

    vector<int> arr = {1,1,2,2,2,3};
    int s = arr.size();

    if(Print_Freq(arr,s)){
        cout<<"Yes Unique Freuency of each element "<<endl;
    }
    else{
         cout<<"Not Unique Freuency of each element"<<endl;
    }
    return 0;
}