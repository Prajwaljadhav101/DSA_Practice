#include <iostream>
#include <vector>
using namespace std;

void mergeArray(int arr1[], int arr2[], vector<int>& v){
    int j=0, i=0;
    int n=5, m=3;
    while(i<n && j<m){  
        if(arr1[i]>arr2[j]){
            v.push_back(arr2[j++]);

        }
       
        else if(arr1[i]<=arr2[j]){
            v.push_back(arr1[i++]);
        }
    }

    while(i<n){
        v.push_back(arr1[i++]);       
    }

    while(j<m){
        v.push_back(arr2[j++]);
    }
}

int main(){
    int arr1[5]={1,3,5,7,9};
    int arr2[3]={2,4,6};
    vector<int> v;
    mergeArray(arr1,arr2,v);
    for(int i=0;i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    return 0;
}