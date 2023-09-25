#include <iostream>
using namespace std;

int main(){

    // int a = 10;
    // int b = 20;

    // int *ptr = &a;
    // int *ptr2 = &b;
    // cout<<*ptr<<endl;
    // *ptr = *ptr2;
    // ptr = ptr2;
    // *ptr = *ptr + 1;
    // cout<<*ptr;

    int arr[4] = {11,2,3,4};

    
    /*
    cout<<arr[0]<<endl;
    cout<<*arr<<endl; //value
    cout<<arr<<endl; //Print Address
    cout<<"1st: "<<*arr  + 1<<endl; //first index variable in array a[0]
    cout<<"2nd: "<<*(arr +  1)<<endl; //fisrt index var + 1
    cout<<"3rd: "<<*(arr + 1)+1<<endl; //fisrt index var + 1
    cout<<"4th: "<<*(arr) + 1<<endl; //fisrt index var + 1

    int i = 3;
    cout<<"i[arr]: "<<i[arr]<<endl; 
    */

   int *p = &arr[0];

   cout<<p<<endl;
   cout<<*p<<endl;
   cout<<arr<<endl;
//  ERROR :  arr = arr+1;
   cout<<arr;
    return 0;
}