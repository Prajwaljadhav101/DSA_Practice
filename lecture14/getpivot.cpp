#include <iostream>
using namespace std;

int getPivot(int arr[],int n){
    int s=0, e=n-1;
     
    while(s<e){

         int mid = s + (e-s)/2;
         
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }
        else if(arr[mid]<arr[0]){
            e=mid;
        }
        
      
    }
    return arr[s];
}

int main(){
    int n=7;
    int arr[7]={7,1,2,3,4,5,6};
    cout<<getPivot(arr,n);

    return 0;
}

