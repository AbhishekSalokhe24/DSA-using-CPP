#include <iostream>
using namespace std;

bool isFound(int a[][3],int row,int col,int target){

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(a[i][j] == target){
                return 1;
            }
        }
    }
    return 0;
    
}
int main(){

    int arr[3][3];
    cout<<"Enter Elements :  "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    int target = 0;
    cout<<"Enter Element TO Search"<<endl;
    cin>>target;

    if((isFound(arr,3,3,target))){
        cout<<"Target Found"<<endl;
    }
    else{
         cout<<"Target Not Found"<<endl;
    }
    return 0;
}