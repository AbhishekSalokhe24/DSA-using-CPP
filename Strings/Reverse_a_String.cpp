#include <iostream> 
using namespace std;

int getLength(char a[]){
    int count = 0;
    for(int i = 0;a[i]!='\0';i++){
        count++;
    }
    return count;
}

void Reverse_String(char a[],int n){

    int s = 0;
    int e = n-1;
    while(s < e){
        swap(a[s],a[e]);
        s++;
        e--;
    }
    cout<<"Reversed String : "<<a<<endl;
}

int main(){

    char str[10];
    cout<<"Enter a String : "<<endl;
    cin>>str;

    int n = getLength(str);
    Reverse_String(str,n);


    return 0;
}