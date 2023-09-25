#include <iostream> 
using namespace std;

int First_Occur(int arr[],int n,int k){

    int start = 0;
    int end = n-1;
    int ans = -1;
    int mid = start + (end-start)/2;

    while(start <= end){

        if(arr[mid] == k){
            ans = mid;
            end = mid - 1;
        }
        else if(k > arr[mid]){
            start = mid + 1;
        }
        else if(k < arr[mid]){
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}

int Last_Occur(int arr[],int n,int k){

    int start = 0;
    int end = n-1;
    int ans = -1;
    int mid = start + (end-start)/2;

    while(start <= end){

        if(arr[mid] == k){
            ans = mid;
            start = mid + 1;
        }
        else if(k > arr[mid]){
            start = mid + 1;
        }
        else if(k < arr[mid]){
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}

int main(){

    int arr[8] = {1,2,3,3,8,3,4,3};
    int key = 4;
    int ans = 0;
    int one = First_Occur(arr,8,key);
    int two = Last_Occur(arr,8,key);
    int plus = two - one;

    if(plus > 0){ //condition : if element never exist

        ans = plus + 1; //<-- this is for Array Indexing Start from 0 to n-1 (e.g. index : 4 == 5 | index : 7 == 8 

        cout<<"Occurence of k- "<<key<<" = "<<ans;
    }
    else{
        cout<<"Occurence of k- "<<key<<" = "<<" 0 ";
    }
    

    return 0;
}