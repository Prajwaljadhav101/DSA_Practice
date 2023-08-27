#include<iostream>
using namespace std;

void Create(int arr[],int n){
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
}
void printArr(int arr[], int n){
    cout<<"array elements are ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int printSum(int arr[],int n){
    int ans=0;
    cout<<"sum of array elements is ";
    for(int i=0; i<n; i++){
        ans = ans + arr[i];   
    }
    return ans;
}

int main(){
    int n;
    cout<<"enter number of elements in array ";
    cin>>n;
    int arr[n];
    cout<<"enter array elements ";
    Create(arr, n);
    printArr(arr,n);
    cout<<printSum(arr, n);
    return 0;
    
}