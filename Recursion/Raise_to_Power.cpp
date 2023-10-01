#include <iostream>
using namespace std;


int Power(int n){

    if(n == 0){
        return 1;
    }
    return 2 * Power(n-1);

}
int main(){

    int num = 0;

    cout<<"Enter num : "<<endl;
    cin>>num;
    int ans = Power(num);
    cout<<"Answer : "<<ans<<endl;

    return 0;
}