#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<string> pens(n);
    for(int i=0; i<n; i++){
        cin>>pens[i];
    }
    string target_color;
    cin>>target_color;
    int removed = 0;
    int stackSize = n;
    while(pens[0]!= target_color){
        pens.erase(pens.begin());
        removed++;
        stackSize--;
    }
    cout<<removed<<endl;
    cout<<stackSize;
    return 0;
}