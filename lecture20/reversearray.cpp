#include<iostream>
using namespace std;

void reverse(int arr[], int n){
    for(int i=0; i<n; i++){
        swap(arr[i],arr[n-1]);
        n--;
    }
}

int main(){
    int n=5;
    int arr[5]={11,7,3,12,4};
    reverse(arr,n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}