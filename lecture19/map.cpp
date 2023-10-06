#include <iostream>
#include <map>
using namespace std;

int main(){
    map<int,string> m;

    m[1]="prajwal";
    m[2]="tushar";
    m[13]="sarthak";

    m.insert({5,"sumit"});

    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    cout<<"find 1 "<<m.count(1);
}