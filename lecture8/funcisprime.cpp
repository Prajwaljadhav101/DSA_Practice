#include<iostream>
using namespace std;

int isPrime(int num){
    if(num==0 || num==1){
        cout<<"neither prime not composite";
        exit(0);
    }
    for(int i=2; i<=(num/2+1); i++){
        if(num%i==0){
            return 0;
        }

    }
    return 1;
}

int main(){
    int n,ans;
    cin>>n;
    ans=isPrime(n);
    if(ans==1){
        cout<<"number is prime";
    }
    else cout<<"number is not prime";
}
