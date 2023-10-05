#include <bits/stdc++.h>

using namespace std;

bool is_Palidrome(string str,int i,int j){

    if(i > j){
        return true;
    }
    
    if(str[i] != str[j]){
        return false;
    }
    else{
        is_Palidrome(str,i+1,j-1);
    }
}

int main(){

    string test = "baab";
    if(is_Palidrome(test,0,test.size()-1)){
        cout<<"Palidrome String"<<endl;
    }
    else{
        cout<<"Palidrome Not String"<<endl;
    }
    
    return 0;
}