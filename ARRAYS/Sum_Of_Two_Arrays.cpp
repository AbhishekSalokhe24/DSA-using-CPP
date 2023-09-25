#include <iostream>
#include <vector>
using namespace std;

vector<int> reverse(vector<int> &a){
    int n = a.size();
    int s = 0;
    int e = n-1;

    while(s<e){
        swap(a[s],a[e]);
        s++;
        e--;
    }

    return a;
}

vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
	
    int i = n-1;
    int j = m-1;
    vector<int> ans;
    int carry = 0;
    
    while(i>=0 && j>=0) {
        int val1 = a[i];
        int val2 = b[j];
            
        int sum = val1 + val2 + carry;   
        
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
        i--;
        j--;
    }
    
    // first case
    while(i>=0) {
        int sum = a[i] + carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
        i--;
    }
    
     // second case
    while(j>=0) {
        int sum = b[j] + carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
        j--;
    }
    
     // second case
    while(carry != 0) {
        int sum = carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
    }
    
    //print(ans);
    return reverse(ans);
}
int main(){

    // vector<int> a1{1,2,3,4};
    vector<int> a1;
    vector<int> a2;

    a1.push_back(1);
    a1.push_back(2);
    a1.push_back(3);
    a1.push_back(4);

    a2.push_back(5);
    
 

    vector<int> c1  = findArraySum(a1,a1.size(),a2,a2.size());

    // Reverse ANS vector Push_back from back side
    
    
    for(int i=0;i<c1.size();i++){
        cout<<c1[i]<<" ";
    }
    cout<<endl;



    return 0;
}