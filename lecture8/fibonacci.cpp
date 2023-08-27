#include<iostream>
using namespace std;

void fib(int num){
    int arr[num]={0,1};
    for(int i=2; i<num; i++){
        arr[i]=arr[i-1]+arr[i-2];
    }
    for(int i=0; i<num; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n;
    cout<<"enter n ";
    cin>>n;

    fib(n);
}