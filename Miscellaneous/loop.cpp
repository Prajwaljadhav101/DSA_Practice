#include <bits/stdc++.h>
using namespace std;

int funct(int n){
    int sum;
    for(int i=1; i<=n; i++)
    {    
        sum= sum + i;
    }
    return sum;
}

int main()
{
    int n;
    cout<<"enter n";
    cin>>n;
    int s= funct(n);
    cout<<s;
}