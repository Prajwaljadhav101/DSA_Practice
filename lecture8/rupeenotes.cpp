#include<iostream>
using namespace std;

int main(){
    int n,notes=0;
    cout<<"enter the value of n"<<endl;
    cin>>n;

    
    cout<<"100 rupees notes required: ";
    
    if(n/100>=1){
        cout<<n/100;
        n%=100;
    }

    
    cout<<endl<<"50 rupees notes required: ";
         
    if(n>50){
        cout<<n/50;
        n%=50;
    }
    

    cout<<endl<<"20 rupees notes required: ";

    if(n>20){
        cout<<n/20;
        n%=20;
    }

    cout<<endl<<"1 rupee notes required: ";

    if(n>1){
        cout<<n/1;    
    }
    return 0;
    
}