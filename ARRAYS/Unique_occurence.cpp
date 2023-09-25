#include <iostream>
using namespace std;

void Find_occurence(int arr[],int n){

    int Freq[n];
    int visited = -1;

    for(int i=0;i<n;i++){
        int count = 1;
        for(int j=i+1;j<n;j++){

            if(arr[i]==arr[j]){
                count = count+1;
                Freq[j] = visited;
            }
        }
        if(Freq[i] != visited){
            Freq[i] = count;
        }
    }

    for(int i=0;i<n;i++){
        if(Freq[i]!=visited){
            cout<<arr[i]<<" : "<<Freq[i]<<endl;
        }
    }

    // for(int i=0;i<n;i++){
    //     for(int j=i+1;j<n;j++){

    //         if(Freq[i]==Freq[j]){
    //             return 0;
    //         }
    //     }
    // }

    // return 1;

}

int main(){

    int arr[10] = {-3,0,1,-3,1,1,1,-3,10,0};
    Find_occurence(arr,10);

    
    // if(Find_occurence(arr,10)){
    //     cout<<"Unique Occurence"<<endl;
    // }
    // else{
    //      cout<<"Not Unique Occurence"<<endl;
    // }
    return 0;
}