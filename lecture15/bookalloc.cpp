#include <iostream>
using namespace std;

int sum(int arr[], int n){
    int sum=0;
    for(int i = 0; i<n; i++){
        sum = sum + arr[i];
    }
    return sum;
}

int bookAlloc(int arr[], int n, int m){
    int s=0, e=sum(arr,n);
    int mid = s + (e-s)/2;
    while(s<e){
        
        int pages = 0;
        int bp = 0;
        int i=0;
        for(i=0; i<n; i++){
            pages = pages + arr[i];
            if(pages<=mid && bp<m){
                continue;
            }
            else{
                bp++;
                if(bp>m-1){
                    break;
                }
                i=i-1;
                pages = 0;
            }
        }
        if(bp<m){
            e = mid;
            bp=0;
        }
        else{
            s = mid+1;
            bp=0;
        }
        mid = s + (e-s)/2;
    }
    return mid;
}


int solve(int arr[], int size){

    int start = 0;
    int end = size - 1;

    int sum1 = arr[start++];
    int sum2 = arr[end--];

    while (start <= end)
    {
        if(sum1 < sum2){
            sum1 += arr[start];
            start++;
        } 
        else{
            sum2 += arr[end];
            end--;
        }     
    }
    
    return max(sum1, sum2);
}

int main(){
    int n= 4;
    int m=2;
    int arr[n]={10,20,30,40};
    // cout<<bookAlloc(arr,n,m);

    cout << solve(arr, n);

    return 0;
}