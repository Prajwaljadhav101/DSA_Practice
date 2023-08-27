#include<iostream>
using namespace std;

int main(){
    int arr[8]={1,2,3,4,5,6,7,8};
    int n=7;
    int j = 7;
    int k=n/2;
    for(int i=0; i<=n; i++){
        if(n==k ){
            break;
        }
        // int temp=arr[i];
        // arr[i]=arr[n];
        // arr[n]=temp;
        swap(arr[i],arr[n]);
        n--;

    }
    cout<<endl;
    for(int i=0; i<=j; i++){
        cout<<arr[i]<<" ";
    }
}

