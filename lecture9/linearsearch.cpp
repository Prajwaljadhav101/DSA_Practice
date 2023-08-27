#include<iostream>
using namespace std;

bool search(int arr[], int n, int ele){
    for(int i=0; i<n; i++){
        if(ele==arr[i]){
            return 1;
        }
        
    }
    return 0;
}

int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int ele;
    int n=9;
    cout<<"enter the element you want to search in arr ";
    cin>>ele;
    cout<<search(arr, n, ele);


}