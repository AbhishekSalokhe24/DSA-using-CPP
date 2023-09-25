#include<iostream>
using namespace std;

// https://www.codingninjas.com/studio/problems/sum-of-even-odd_624650

int main() {
	// Write your code here
	int n;
    cout<<"Enter a Number : "<<endl;
	cin>>n;
	int digit = 0;
	int even_count = 0;
	int odd_count = 0;

	while(n != 0){
		digit = n % 10;
		if(digit % 2 == 0){
			even_count = even_count + digit;
		}
		else if(digit % 2 == 1){
			odd_count = odd_count + digit;
		}
		n = n/10;
	}
	cout<<"Even Sum : "<<even_count<<" Odd Sum : "<<odd_count;

}
