#include <iostream>
#include <vector>
using namespace std;

void moveZero(vector<int>& v, vector<int>& v1){
    int n=v.size();
    int k=0;
    for(int i=0; i<n; i++){
        if(v[i]!=0){
            v1[k++]=v[i];
        }
        else continue;
    }
}

// we can also swap instead of creating another array
void swappingApproach(vector<int>& v){
    int nonZero=0;
    for(int i=0; i<v.size(); i++){
        if(v[i]!=0){
            swap(v[i],v[nonZero]);
            nonZero++;
        }
    }
}

int main(){
    vector<int> v = {2,0,1,3,0,0,0};
    vector<int> v1(v.size(),0);
    // moveZero(v,v1);
    swappingApproach(v);
    // v=v1;
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    
}