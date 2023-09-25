#include <iostream>
using namespace std;

char Max_Ocuur(string s){

    int count = 0;
    int occur[26] = {0};
    int ans  = 0; 
    for(int i=0;i<s.length();i++){
        char sr = s[i];
        count = sr - 'a';  //for i = 0; ith position char - 'a' ASCII value gives that postion A-Z
        occur[count]++;    //go to ouccur of i and increase count + 1;
    }

    int max = -1;
    for(int i=0;i<26;i++){
        if(max < occur[i]){
            ans = i;
            max = occur[i];
        }
    }
    char finalAns =  'a' +  ans;
    return finalAns;

}

int main(){

    string s;
    cout<<"Enter a String To check Max Occur Char : "<<endl;
    cin>>s;
    cout<<Max_Ocuur(s);

    return 0;
}