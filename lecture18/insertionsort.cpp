#include <iostream>
#include <vector>
using namespace std;

void insertionSort(vector<int>& v){
    int n = v.size();
    for(int i=1; i<n; i++){
        for(int j=i; j>0; j--){
            if(v[j-1]>v[j]){
                swap(v[j-1],v[j]);
            }
            else{
                break;
            }
        }
    }
}

int main(){
    vector<int> v = {10,1,7,4,8,2,11};
    insertionSort(v);
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    return 0;
}