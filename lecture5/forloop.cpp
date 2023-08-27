#include<bits/stdc++.h>
using namespace std;

int main(){
    
    //fibonacci series

    // int n;
    // cin>>n;
    // int fib[n]={0,1};
    // cout<<fib[0]<<" "<<fib[1]<<" ";

    // for(int i=2; i<n; i++){
    //     fib[i]=fib[i-1]+fib[i-2];
    //     cout<<fib[i]<<" ";
    // }

    // for(int i=0;i<=15; i+=2){
    //     cout<<i<<" ";

    //     if(i&1){
    //         continue;
    //     }
    //     i++;
    // }

    // int n,sum=0,prod=1;
    // cin>>n;

    // while(n!=0){
    //     int digit=n%10;
    //     sum=sum+digit;
    //     prod=prod*digit;

    //     n=n/10;

    // }
    // int ans=prod-sum;
    // cout<<ans;

    int count=0;
    int n;
    cin>>n;
    while(n!=0){
        if(n&1){
            count++;
        //    n= (n>>1); this is wrong because we are only shifting n to right if it is 1 and if we encounter even 1 zero then loop becomes infinite
        }
        n=(n>>1);
    }
    cout<<count;
    
}