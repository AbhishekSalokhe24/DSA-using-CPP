#include <bits/stdc++.h>

using namespace std;


void Increase(int n){
    n++;    
}

void Increase_2(int& n){
    n++;    
}
int main(){

    int num = 20;

    cout<<"Before Pass By Value Increase : "<<num<<endl; 

    Increase(num);  //--Pass By Value
    cout<<"After Pass By Value Increase : "<<num<<endl;

    cout<<"---------------------------------------------"<<endl;

    cout<<"Before Pass By Refrence : "<<num<<endl;
    Increase_2(num);
    cout<<"After Pass By Refrence : "<<num<<endl;

    return 0;
}