#include<iostream>
using namespace std;

int main(){
    int n,ans=0;
    cout<<"enter n ";
    cin>>n;
    int digit=0;
    while(n>0){
        digit=n%10;
        ans= digit+ans;
        n/=10;
    }
    cout<<ans;
    return 0;
    
}