#include <iostream>
using namespace std;

void Fibonaccii(int limit,int n1,int n2){

    int n3 = 0;
    for(int i=0;i<limit;i++){
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
        cout<<n3<<" "; 
    }
     
}


int main(){

    int a1 = 0;
    int a2 = 1;
    int no_limit = 10;
    cout<<" 0 1 ";
    Fibonaccii(10,a1,a2);
    return 0;
}