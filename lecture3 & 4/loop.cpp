#include<bits/stdc++.h>
using namespace std;

// int main(){
//     int n;
//     int i=1;
//     cin>>n;
//     while(i<=n){
//         cout<<i<<" ";
//         i+=1;

//     }
// }

int main(){
    int sum,n;
    int i=2;
    cin>>n;
    while(i<=n){
        sum+=i;
        i+=2;
    }
    cout<<sum;
}