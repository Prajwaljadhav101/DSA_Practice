#include <bits/stdc++.h>
using namespace std;

void prime(int n){
    int flag=0;
    if (n==0 || n==1){
        flag =2;
    }
    if (n==2){
        flag =3;
    }
    for(int i=2;i<=n-1; i++){
        if(n%i==0){
            flag = 1;
            break;}
        else{
            continue;
        }
    }
    if (flag==0){
        cout<<n<<" is a prime number";
    }
    else if(flag==3){
        cout<<n<<" is not a prime number";
    }
    else if(flag==2){
        cout<<n<<" is neither prime not composite";
    }
    else{
        cout<<n<<" is not a prime number";
    }
}

int main(){
    int n;
    cout<<"enter n ";
    cin>>n;
    prime(n);
}