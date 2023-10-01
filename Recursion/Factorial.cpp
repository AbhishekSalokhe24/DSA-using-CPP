#include <iostream>

using namespace std;


// Without Recursion
// int Factorial(int n){

//     int fact = 1;
//     for(int i = 1;i<=n ;i++){
//         fact = fact * i;
//     }
//     return fact;
// }


int Factorial_2(int n){

    if(n == 0){
        return 1;
    }
    int small = Factorial_2(n-1);
    int big = n * small;
    return big;
}

int main(){


    int n  = 0;
    cout<<"Enter a number : "<<endl;
    cin>> n;
    //int ans = Factorial(n);
    int ans2 = Factorial_2(n);
    cout<<"Factorial is "<<ans2<<endl;

    return 0;
}