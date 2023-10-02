#include <iostream> 
using namespace std;

bool LinearSearch(int arr[],int size,int k){

    if(size == 0){
        return false;
    }
    if(arr[0] == k){
        return true;
    }
    else{
        bool RemainPart = LinearSearch(arr+1,size-1,k);
        return RemainPart;
    }

}

int main(){

    int arr[5] = {10,20,50,80,5};
    int key = 50;
    if(LinearSearch(arr,5,key)){
        cout<<key<<" is Present"<<endl;
    }
    else{
        cout<<key<<" is Not present"<<endl;
    }
    return 0;
}