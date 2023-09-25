#include <iostream>
#include <vector>
using namespace std;

// Input: s = "A man, a plan, a canal: Panama"
// Output: true
// Explanation: "amanaplanacanalpanama" is a palindrome.
// --------------------------------------------------------------------------

// check only alphabetes and not symbols like !@#$%^&*(),. etclw
bool ischar(char ch){
    if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z')||(ch>='0'&&ch<='9')){
        return 1;
    }
    else{
        return 0;
    }
}

// case : convert to lowercase
char toLowercase(char ch){
   
    if((ch>='a'&&ch<='z') || (ch>='0' && ch<='9')){
        return ch;
    }
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
  
}

// to check string is palindrome or not campare s and e chars
bool isPlaindrome(string str){
    int s = 0;
    int e = str.length()-1;
    while(s<=e){
        if(str[s] != str[e]){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}

int main(){

    string s = "A man, a plan, a canal: Panama";
    string temp = "";

    for(int i=0;i<s.length();i++){
        if(ischar(s[i])){
            temp.push_back(s[i]);
        }
    }

    for(int i=0;i<temp.length();i++){
        temp[i] = toLowercase(temp[i]);
    }

    if(isPlaindrome(temp)){
        cout<<"Yes Palindrome";
    }
    else{
         cout<<"Not Palindrome";
    }
    return 0;
}