#include <iostream>
using namespace std;

void RowSum(int a[][3],int row,int col){
   
    for(int i=0;i<row;i++){
         
        int sum = 0;
        for(int j=0;j<col;j++){
            sum = sum + a[i][j];
        }
        cout<<sum<<" ";
    }
}

void ColSum(int a[][3],int row,int col){
   for(int i=0;i<row;i++){
         
        int sum = 0;
        for(int j=0;j<col;j++){
            sum = sum + a[j][i];
        }
        cout<<sum<<" ";
    }
}

// Largest Sum Of Rows
int LargestSum(int a[][3],int row,int col){
    int min  = 0;
    int ans  = 0;
    for(int i=0;i<row;i++){
        int sum = 0;
        for(int j=0;j<col;j++){

            sum = sum + a[i][j];
            if(sum>min){
                min = sum;
                 ans = i;
            }
        }
       
    }
    cout<<"Max Sum in Row : "<<min<<endl;
    return ans;
}

int main(){

    int arr[3][3] = { {1,2,3},
                    {4,5,6},
                   {7,8,9}};
    cout<<"Sum Of Rows : "<<endl;
    RowSum(arr,3,3);
    cout<<endl;
    cout<<"Sum Of Cols : "<<endl;
    ColSum(arr,3,3);
    cout<<endl;
    cout<<"Largest Row : "<<LargestSum(arr,3,3);
    return 0;
}