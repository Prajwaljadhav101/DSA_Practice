#include<bits/stdc++.h>
using namespace std;

int main(){
    char val;
    cout<<"enter input "<<endl;
    cin>>val;
    if(val>'A' && val<'Z'){
        cout<<val<<" is uppercase"<<endl;
    }
    else if(val>'a' && val<'z'){
        cout<<val<<" is lower case"<<endl;

    }
     else{
        cout<<val<<" is not a character";
    }
}