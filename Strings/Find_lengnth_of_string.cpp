#include <iostream>
using namespace std;

// ** Sting always ends with '\0'

int getlength(char a[]){
    int count = 0;
    for(int i=0; a[i] != '\0';i++){
        count++;
    }
    return count;
}

int main(){

    char name[20];
    cout<<"Enter a name : "<<endl;
    cin>>name;
    cout<<"Length of String : "<<getlength(name);
    return 0;
}       