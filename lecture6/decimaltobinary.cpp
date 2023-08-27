#include<bits/stdc++.h>
using namespace std;

int main(){
    // for positive numbers
    int mul=0,b=0,j=0,nans=0,n,i=0,bit=0,ans=0;
    cout<<"enter the value of n ";
    cin>>n;
    n=abs(n);
    cout<<"absolute value of n is "<<n<<endl;

    // for positive number
    // while(n!=0){

    //     bit=n&1;
    //     ans=(bit*pow(10,i))+ans;
    //     i+=1;
    //     n=n>>1;
    // }
    // cout<<ans;

    // for negative numbers

    while(n!=0){

        bit=n&1;
        ans=(bit*pow(10,i))+ans;
        i+=1;
        n=n>>1;
    }
    cout<<"binary representation of given number is "<<ans<<endl;
    for(int k=0; k<i; k++){
        mul=pow(10,k)+mul;
    }

    b=ans^mul;

    int arr[i]={};
    for(int z=i-1; z>=0; z--){
        int ele=b%10;
        arr[z]=ele;
        b=b/10;
    }

    cout<<"1s complement of given number is ";
    for(int y=0; y<i; y++){
        cout<<arr[y]<<" ";
    }
    cout<<endl;

    for(int x=i-1; x>=0; x--){
        int carry=1;
        if(arr[x]==0 && carry==1){
            arr[x]=1;
            carry=0;
            break;
        }

        else if(arr[x]==1 && carry==1){
            arr[x]=0;
        }
    }
    cout<<"binary representation of negative number is ";
    for(int y=0; y<i; y++){
        cout<<arr[y]<<" ";
    }


}