#include <iostream>
using namespace std;

int main(){

    int a[3][3];
    cout<<"Enter Elements : "<<endl; 
    // Rows Wise Input
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>a[i][j];
        }
    }
    // Colums Wise Input
    // for(int j=0;j<3;j++){
    //     for(int i=0;i<3;i++){
    //         cin>>a[j][i];
    //     }
    // }
    cout<<"Printing Arrays : "<<endl;
    //   Column Wise Printting

    // for(int i=0;i<3;i++){
    //     for(int j=0;j<3;j++){
    //         cout<<a[j][i]<<" ";
    //     }
    //     cout<<endl;
    // }

     for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}