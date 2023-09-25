#include<iostream>
using namespace std;

int main(){

    // how many notes of 100,20,10,1000,50 required for 1330

    int amt = 1330;
    int note;
    int ans;
    int endcase;
    cout<<"Enter Endcase : End = 1"<<endl;
    cin>>endcase;
    while(endcase!=1){
     
         cout<<"Enter Choice Note : "<<endl;
        cin>>note;
        cout<<"\n"<<endl;
        switch(note){
        case 100:
            ans = amt / note;
            cout<<ans<<" notes of 100 RS required "<<"\n";
            cout<<"Enter Endcase : End = 1"<<endl;
    cin>>endcase;
        break;
        case 20:
            ans = amt / note;
            cout<<ans<<" notes of 100 RS required "<<"\n";
            cout<<"Enter Endcase : End = 1"<<endl;
            cin>>endcase;
        break;
        case 50:
            ans = amt / note;
            cout<<ans<<" notes of 100 RS required "<<"\n";
            cout<<"Enter Endcase : End = 1"<<endl;
            cin>>endcase;
        break;
        case 10:
            ans = amt / note;
            cout<<ans<<" notes of 100 RS required "<<"\n";
            cout<<"Enter Endcase : End = 1"<<endl;
             cin>>endcase;
        break;
        default:
            cout<<"Enter A Valid Note "<<endl;
    }
    }
    
    cout<<"Thanks For Using Note Counter :)"<<endl;
    

    return 0;
}