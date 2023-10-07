#include <iostream>
#include <vector>
using namespace std;

void rotateArray(vector<int>& v, int k){      //space complexity = O(1)     time complexity = (n*k)
    int n=v.size()-1;
    int temp=0;
    while(k>0){
        temp = v[n];
        for(int i=0; i<n; i++){
            v[n-i]=v[n-1-i];
        }
        v[0]=temp;
        k--;
    }
}

void Babbar(vector<int>& v, int k){     //space complexity = O(n)    time complexity = O(n)
    vector<int> temp(v.size());
    for(int i=0; i<v.size(); i++){
        temp[(i+k)%v.size()] = v[i];
    }
    v=temp;
}

int main(){
    vector<int> v={-1,-100,3,99};
    int k=2;
    // rotateArray(v,k);
    Babbar(v,k);
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    return 0;
}