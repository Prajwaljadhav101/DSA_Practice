#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> a={1,2,3,4,5,6};
    cout<<a.size();
    for(int num: a){
        cout<<num<<" ";
    }
    return 0;

}