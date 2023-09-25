#include <iostream>
using namespace std;

// function : power
int power(int base,int raise){

    int ans=1;
    for(int i=1;i<=raise;i++){
        ans = base * ans;
    }
    return ans;
}


int main(){

    cout<<power(2,3);

    return 0;
}

