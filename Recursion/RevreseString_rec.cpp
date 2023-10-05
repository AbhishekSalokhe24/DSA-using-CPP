#include <iostream>

using namespace std;

void rev(string& name,int i,int j){ //with pass by value it not return edcba
   
    if(i>j){
        return;
    }
    swap(name[i],name[j]);
    i++;
    j--;
    rev(name,i,j);
}

int main(){

    string str = "abcde";
    cout<<str<<endl;
    rev(str,0,str.length()-1);
    cout<<str<<endl;
    return 0;
}