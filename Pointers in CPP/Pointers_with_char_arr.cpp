#include <iostream> 
using namespace std;

int main(){

    char a[5] = "abcd";
    cout<<a<<"\n";
    cout<<&a<<"\n";

    char *c = &a[0];
    char *d = &a[0];


    cout<< "*c : "<<*c<<"\n";
    cout<< "d = &a[0]: "<<d<<"\n";
    cout<<a<<endl;

    return 0;
}