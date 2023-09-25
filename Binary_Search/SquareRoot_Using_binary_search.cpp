#include <iostream>
using namespace std;


double Next_part(int n,int max_digi,int temp_ans){

    double factor = 1;
    double ans = temp_ans;
    for(int i = 0;i<max_digi;i++){
        factor = factor/10;
        for(double j=temp_ans; j*j<n ;j=j+factor){
            ans = j;
        }
    }
    return ans;
}

// TO calculate First Part Of Sqaure Root -
int BinarySearch_Sq_root(int n){

    int start = 0;
    int end = n;
    int ans = -1;
    int mid = start + (end-start)/2;
    

    while(start <= end){
     
      int square = mid * mid;

      if(square == n){
        return mid;
      }
    // this is case for sq.root of 6
      if(square < n){

        ans = mid;
        start = mid + 1;
      }
      else{
        end = mid - 1;
      }
      
      mid = start + (end - start)/2;

    }
    
    return ans;

}

int main(){

    int num;
    cout<<"Enter a Number : "<<endl;
    cin>>num;
    int sq = BinarySearch_Sq_root(num);
    cout<<"Square Root of : "<<num<<" = "<<sq<<endl;
    cout<<"Complete Square Root of : "<<num<<" = "<<Next_part(num,3,sq)<<endl;
    return 0;
}