#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v;

    vector<int> a(5,1);//a(size of vector,initialize with 1)
    for(int i:a){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"size "<<v.capacity()<<endl;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    cout<<v.capacity()<<endl;
    cout<<"element at 1st index "<<v.at(1)<<endl;
    cout<<"first element "<<v.front()<<endl;
    cout<<"last element "<<v.back()<<endl;
    cout<<"before pop ";
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl<<"after pop ";
    v.pop_back();
    for(int i:v){
        cout<<i<<" ";
    }

    return 0;
}