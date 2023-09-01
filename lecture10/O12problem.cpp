#include<iostream>
#include<vector>
using namespace std;

void zero12(int arr[],int n){
    int one=0, two=0, zero=0;

    for(int i=0; i<n; i++){
        if(arr[i]==0){
            zero++;
        }
        if(arr[i]==1){
            one++;
        }
        if(arr[i] == 2) two++;
    }
    
    int i=0;

    while (zero)
    {   
        arr[i]=0;
        i++;
        zero--;
    }

    while (one){
        arr[i]=1;
        i++;
        one--;
    }

    while(two){
        arr[i]=2;
        i++;
        two--;
    }
    

    for (int j = 0; j < n; j++)
    {
        cout<<arr[j] << " ";
    }
    
}

int main(){
    int n=7;
    int arr[7]={1,2,0,0,2,1,1};
    zero12(arr,n);
    return 0;
}