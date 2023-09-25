#include <iostream> 
using namespace std;

int main(){

    int num = 24;

    int *ptr = &num;

    cout<<"ptr : "<<ptr<<"\n";

    cout<<"*ptr : "<<*ptr<<"\n";

    // ptr = ptr + 1; adress will changed

    cout<<"ptr + 1 = "<<ptr<<"\n";

    *ptr = (*ptr) + 1 ; //Value Will Inceresed

    cout<<"*ptr + 1 = "<<*ptr<<"\n";

    cout<<"Size OF ptr: "<<sizeof(ptr)<<"\n";

    cout<<"Size OF *ptr: "<<sizeof(*ptr)<<"\n";



    return 0;
}