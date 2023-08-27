#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,i=0,ans=0,k=0;
    cout<<"enter binary number: ";
    cin>>n;

    while(n!=0){
        k=n&1;
        ans = k*pow(2,i)+ans;
        i+=1;
        n=n/10;
    }
    cout<<"decimal number of given binary number is: "<<ans;

}