#include <iostream>
#include <vector>
using namespace std;

void reverse(vector<int>& v,int m){
    int j=v.size();
    for(int i=m+1; i<j-1; i++){
        swap(v[i],v[j-1]);
        j--;
    }
}

int main(){
    int m=3;
    vector<int> v={1,2,3,4,5,6};
    reverse(v,m);
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }

}