#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int>& v){

    int n = v.size();
    for(int i=0; i<n-1; i++){
        bool flag = false;

        for(int j=0; j<n-i-1; j++){
            if(v[j]>v[j+1]){
                swap(v[j],v[j+1]);
                flag = true;
            }
        }
        if(flag == false){      //if nothing is swapped then break the loop as array is already sorted.
            break;
        }
    }

}

int main(){
    vector<int> v = {10,1,7,6,14,9};
    bubbleSort(v);
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    return 0;
}
