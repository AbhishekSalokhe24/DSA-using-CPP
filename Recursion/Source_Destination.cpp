#include <iostream> 
using namespace std;

void Reached_Home(int src,int destn){

    // Base case
    cout<<"SOURCE AT : "<<src<<" DESTINATION AT : "<<destn<<endl;

    if(src == destn){
        cout<<"Reached at Destination---"<<endl;
        return;
    }

    src++;
    Reached_Home(src,destn);
}

int main(){

    int s = 1;
    int d = 10;
    Reached_Home(s,d);
    return 0;
}