#include <iostream>
using namespace std;

void update(int **ptr2){

    // ptr2 = ptr2 + 1; - No change
    // *ptr2 = *ptr2 + 1; - No change
    **ptr2 = **ptr2 + 1;
}

int main(){



    int i = 5;

    int *ptr = &i;

    int **ptr2 = &ptr;

    // cout<<"ptr : "<<ptr<<endl;
    // cout<<"ptr2 : "<<*ptr2<<endl;

    // cout<<"Before : "<<endl;
    // cout<<i<<endl;
    // cout<<*ptr<<endl;
    // cout<<**ptr2<<endl;

    // cout<<"After"<<endl;
    // update(ptr2);
    // cout<<i<<endl;
    // cout<<*ptr<<endl;
    // cout<<**ptr2<<endl;

    // cout<<i<<endl;
    // cout<<*ptr<<endl;
    // cout<<**ptr2<<endl; //-- same o/p 5

    // cout<<&i<<endl;
    // cout<<ptr<<endl;
    // cout<<*ptr2<<endl; //-- same o/p address of i

    // cout<<&ptr<<endl;
    // cout<<ptr2<<endl; //-- same o/p address of ptr

   
    // Pointer with char Array 
    // char ch[] = "abcde";
    // char *p = &ch[0];
    // cout<<"Value of p : "<<p<<endl;
   
    //2.
    // char ch2[] = "Abhishek";
    // char *ch = &ch2[0];
    // ch++;
    // cout<<ch<<endl;


    // Double Pointer MCQ's --------------------

    int first = 110;
    int *p = &first;
    int **q = &p;
    int second = (**q) + 9;
    cout<<first<<" "<<second<<endl;

    


   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
    return 0;
}