#include <iostream>
#include <deque>
using namespace std;

int main(){
    deque<int> d;
    d.push_back(1);
    d.push_front(2);
    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;
    d.pop_back();
    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;
    d.push_back(1);

    cout<<"front "<<d.front()<<endl;
    cout<<"back "<<d.back()<<endl;
    
    cout<<"before erase ";
    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"after erase ";

    d.erase(d.begin(),d.begin()+1);
    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;
}