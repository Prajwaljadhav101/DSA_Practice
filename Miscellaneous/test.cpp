#include<iostream>
using namespace std;

void Create(int arr[],int n){
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
}
void printArr(int arr[], int n){
    arr[0]=12;
    cout<<"array elements are ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n;
    cout<<"enter number of elements in array ";
    cin>>n;
    int arr[n];
    cout<<"enter array elements ";
    Create(arr, n);
    printArr(arr,n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    
}