#include <iostream>
using namespace std;

void update(int *p){
    *p = (*p) * 2;
}
int main(){


    int a = 10;
    int *ptr1 = &a;
    int *ptr2 = ptr1;
    ++(*ptr2);
    cout<<a;
    

    /*
    int k = 8;
    int *p = &k;
    cout<<(*p)++<<endl;
    cout<<k<<endl;
    return 0;
    */

    /*
    int *p = 0;
    int first = 110;
    p = &first;
    cout<<*p<<endl;
    */

    /*
    float f = 12.5;
    float p = 21.5;
    float *ptr = &f;
    (*ptr)++;
    *ptr = p;
    cout<<f<<" "<<p<<endl;
    */

    /*
    int arr[5];
    int *p = arr;
    cout<<sizeof(p)<<" "<<sizeof(arr)<<endl;
    */
    
    /*
    int arr[5] = {1,2,3,4,5};
    cout<<*(arr)<<" "<<*(arr+1)<<endl;
    */


    /*
    int arr[5] = {11,2,2,5,5};
    cout<<  arr<<" "<<    &arr <<" "<< &arr[0]<<endl;
    */

    /*
    int ar[4] = {1,2,3,4};
    cout<<ar<<" "<<(ar+1)<<endl;
    */
    
    /*
    int A[4] = {11,22,33,45};
    int *p = A;
    cout<<p[2]<<endl;
    */

    /*
    char ch = 'a';
    char *ptr = &ch;
    ch++;
    cout<<*ptr<<endl;
    */

    /*
    char str[5] = "abcd";
    char *p = &str[0];
    cout<<p<<endl;
    */

    /*
    char Name[5] = "Abhi";
    char *chr = &Name[0];
    *chr++;
    cout<<chr<<endl;
    */

    /*
    char tp[5] = "pqrs";
    char *p = &tp[0];
    cout<<tp[0]<<" "<<p[0]<<endl;
    */

    /*
    int i = 12;
    update(&i); //Update Function at top
    cout<<i<<endl;
    */
    
    // int first = 110;
    // int *p = &first;
    // int **q = &p;

    // int second = (**q)++ + 9;
    // cout<<first<<" "<<second<<endl;

    
    
    
    
    
    

    return 0;
    
}