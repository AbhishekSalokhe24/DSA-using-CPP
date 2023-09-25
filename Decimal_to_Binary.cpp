#include <iostream>
#include <math.h>

using namespace std;

int main(){

    int n;
    cout<<"Enter a Decimal No."<<endl;
    cin>>n;
    int ans = 0;
    int i = 0;
    while(n!=0){

        int bit = n & 1;
        ans = (bit * pow(10,i)) + ans;
        // Right Shift n
        n = n>>1;
        i++;
    }
    cout<<ans;
    return 0;
}

