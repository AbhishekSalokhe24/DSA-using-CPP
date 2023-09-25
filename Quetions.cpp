#include <iostream>
using namespace std;

 // Question 1 : Subtract the Product and Sum of Digits of an Integer
int Sum_Product_minus(int n){

        int sum = 0;
        int product = 1;
       while(n!=0){
            int digit = n % 10; 
            sum = sum + digit;
            product = product * digit;
            n = n / 10;
       }
       int ans = product - sum;
       return ans;
        
}
 // Question 2 : No. of 1 bit in 000111 like
 int NumberOfOnebit(int n){
    int count = 0;
    if(n&1){
        count++;
    }
    n = n>>1;
    return count;
 }

int main(){
   
    int num = 234;
    cout<<Sum_Product_minus(num)<<endl;
    int num2 = 10;
    cout<<NumberOfOnebit(num2);
    return 0;
}