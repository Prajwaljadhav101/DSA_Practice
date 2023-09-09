#include <iostream>
using namespace std;

int searchPivot(int arr[], int n){
    int s=0, e=n-1;
    
    while(s<e){
        int mid = s + (e-s)/2;
        if(arr[mid]<arr[0]){
            e=mid;
        }
        else if(arr[mid]>=arr[0]){
            s=mid+1;
        }
    }
    return s;
}

int searchElement(int arr[], int n, int ele){
    int s=0, e=n-1;
    int mid;
    int pivot = searchPivot(arr,n);
    // cout<<pivot;
    // while(s<=e){
    
    if(arr[pivot]<=ele && ele<=arr[n-1]){
        s=pivot;
        while(s<=e){
            mid= s+ ((e-s)/2);
            // cout<<mid;
            if(ele==arr[mid]){
                return 1;
            }
            else if(ele>arr[mid]){
                s=mid+1;
            }
            else if(ele<=arr[mid]){
                e=mid;
            }
            
        }
        
    }
    else if(arr[0]<=ele && ele<=arr[pivot-1]){
        e=pivot-1;
        while(s<=e){
            mid = s+ ((e-s)/2);
            // cout<<mid;
            if(ele==arr[mid]){
                return 1;
            }
            else if(ele>arr[mid]){
                s=mid+1;
            }
            else if(ele<=arr[mid]){
                e=mid;
            }
        }
    }

    // }
    return 0;
}


int main(){
    int ele, n = 6;
    cout<<"enter the element to search in array ";
    cin>>ele;
    int arr[n]={7,8,1,2,3,4};
    if(searchElement(arr, n, ele)==1){
        cout<<"found";
    }
    else{
        cout<<"notfound";
    }
    return 0;
}

