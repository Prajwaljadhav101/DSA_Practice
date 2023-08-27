#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
//     for(int i=0; i<n; i++){
//         cout<<endl;
//         for(int j=0; j<n; j++){
//             cout<<"* ";
//         }
//     }


    // while(k<n){
        
    //     l=0;
    //     while(l<n){
    //         cout<<"* ";
    //         l+=1;
    //     }
    //     cout<<endl;
    //     k+=1;
    // }


    // while(k<=n){
    //     while(l<n){
    //         cout<<k;
    //         l+=1;
    //     }
    //     cout<<endl;
    //     k+=1;
    //     l=0;
    // }
    // int num=1;
    // char a='A';
    // char b='A';
    // for(int i=0; i<n; i++){
    //     num=i;
        
    //     for(int j=n-i; j<=n; j++){
    //         cout<<a<<" ";
    //         num--;
    //         a++;
    //     }
    //     cout<<endl;
    //     b++;
    //     a=b;
        
    // }

    // for(int i=1; i<=n; i++){
    //     k=n-i;
    //     for(int j=0; j<n; j++){
    //         if(k>0){
    //             cout<<"  ";
    //             k--;
    //         }
    //         else{
    //             cout<<"*"<<" ";
    //         }
    //     }
    //     cout<<endl;
    // }


    // for(int i=0; i<=n; i++){
    //     int k=2*n+1;
    //     int l=n-i;
    //     int a=n+1-i;
    //     int m=1;
    //     for(int j=0; j<=k; j++){
    //         if(l>0){
    //             cout<<"  ";
    //             l--;
    //         }
    //         else if((j>=a)&&(j<=n)){
    //             cout<<m<<" ";
    //             m++;
    //         }
    //         else if(j>n){
    //             if(m>0){
    //                 cout<<m<<" ";
    //                 m--;
    //             }
    //             else{
    //                 cout<<"  ";
    //             }
    //         }

    //     }
    //     cout<<endl;
    // }

    // dabangg pattern:->

   for(int i=0; i<n; i++){
    int k=2*n+1;
    int l=n-i;
    int m=n-i;
    int temp=n-i;
    for(int j=0; j<k; j++){
        if(l>0){
            cout<<j+1<<" ";
            l--;
        }

        else if((j>m)&&(j<=n)){
            cout<<"* ";
        }

        else if(j>n&& j<=n+i){
            cout<<"* ";
        }
        else if(j>n+i){
            cout<<temp<<" ";
            temp--;
        }
        

    }
    cout<<endl;
   }
}

