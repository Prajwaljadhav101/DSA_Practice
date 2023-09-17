#include <iostream>
using namespace std;
int ans;
int firstOcc(int arr[],int n,int key){
    int ans=-1,s=0, e=n-1;
    int mid=s + (e-s)/2;
    while(s<=e){
        if(arr[mid] == key){
            ans=mid;
            e = mid - 1;
        }
        else if(key>arr[mid]){
            s=mid + 1;
        }
        else{
            e=mid - 1;
        }
        mid=s + (e-s)/2;
    }
    return ans;
}

int lastOcc(int arr[],int n,int key){
    int ans=-1,s=0, e=n-1;
    int mid = s/2 + e/2;
    while(s<=e){
        if(arr[mid] == key){
            ans=mid;
            s = mid + 1;
        }
        else if(key>arr[mid]){
            s=mid + 1;
        }
        else{
            e=mid - 1;
        }
        mid=s + (e-s)/2;
    }
    return ans;
}

int main(){
    int n=5, key;
    int arr[5]={1,2,3,3,5};
    
    cout<<"enter key ";
    cin>>key;
    if(firstOcc(arr,n,key)>=0){
        cout<<"first occurrence of key is at index "<<firstOcc(arr, n, key)<<endl;
        cout<<"first occurrence of key is at index "<<lastOcc(arr, n, key)<<endl;
        pair<int, int> pair1(firstOcc(arr, n, key),lastOcc(arr, n, key));
        cout<<pair1.first<<" "<<pair1.second;
    }
    else cout<<"not present";

    return 0;
}