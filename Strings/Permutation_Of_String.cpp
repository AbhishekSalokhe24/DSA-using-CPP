#include <iostream>
using namespace std;

// String 1 : ab
// String 2 : eidbaooo  if permutations of "ab"  in String 2 then true else false 
// Permutation of "ab" is "ba" 

bool isEqual(int a[26],int b[26]){
    for(int i=0;i<26;i++){
        if(a[i] != b[i]){
            return 0;
        }
    }
    return 1;
}

bool CheckPermutations(string s1,string s2){

    int count[26] = {0};
    
    for(int i=0;i<s1.length();i++){
        int index = s1[i] - 'a';
        count[index]++;
    }
    // Window 1  --> ei //dbaooo
    int windowSize = s1.length();
    int i = 0;
    int count2[26] = {0};

    while(i<windowSize && i < s2.length()){
        int index = s2[i] - 'a';
        count2[index]++;
        i++;
    }
    if(isEqual(count,count2)){
        return 1;
    }
    // next Window : -e id// baooo
    while(i < s2.length()){
        char newChar = s2[i];
        int index = newChar - 'a';
        count2[index]++;

        // to decrement privious e count 
        char oldChar = s2[i-windowSize];
        index = oldChar - 'a';
        count2[index]--;

        if(isEqual(count,count2)){
            return 1;
        }
        i++;
    }
    return 0;
}

int main(){
    // str1 =  "ab";
    // str2 =  "eidbaooo";
    string str1;
    string str2;
    cout<<"Enter String 1 : "<<endl;
    cin>>str1;
    cout<<"Enter String 2 : "<<endl;
    cin>>str2;

    if(CheckPermutations(str1,str2)){
        cout<<"Permutation Exist in S2 :"<<str2<<" as S1 : "<<str1<<endl;
    }
    else{
        cout<<"Permutation NOT Exist in S2 :"<<str2<<" as S1 : "<<str1<<endl;
    }
    return 0;
}