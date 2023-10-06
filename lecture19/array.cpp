#include<iostream>
#include <array>
using namespace std;

int main(){
    int arr[3]={1,2,3};
    // int size= arr.size(); does not work
    array<int,3> a= {1,2,3};
    int size = a.size();
    for(int i=0; i<size; i++){
        cout<<a[i]<<endl;
    }

    cout<<"element at 2 index "<<a.at(2)<<endl;
    cout<<"empyt or not "<<a.empty()<<endl;
    cout<<"first element "<<a.front()<<endl;
    cout<<"last element "<<a.back()<<endl;
    return 0;
}