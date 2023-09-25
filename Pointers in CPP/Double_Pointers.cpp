#include <iostream>
using namespace std;

void update(int **ptr2){

    // ptr2 = ptr2 + 1; - No change
    // *ptr2 = *ptr2 + 1; - No change
    **ptr2 = **ptr2 + 1;
}

int main(){

    int i = 99;

    int *ptr = &i;

    int **ptr2 = &ptr;

    // cout<<"ptr : "<<ptr<<endl;
    // cout<<"ptr2 : "<<*ptr2<<endl;

    cout<<"Before : "<<endl;
    cout<<i<<endl;
    cout<<*ptr<<endl;
    cout<<**ptr2<<endl;

    cout<<"After"<<endl;
    update(ptr2);
    cout<<i<<endl;
    cout<<*ptr<<endl;
    cout<<**ptr2<<endl;
    return 0;
}